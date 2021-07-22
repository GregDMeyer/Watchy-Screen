# Watchy-Screen

Screen based implementation of the [Watchy](https://github.com/sqfmi/Watchy) library. It assumes some familiarity with the Watchy library and only documents the differences.

## Screen abstraction

```c++
class Screen {
 public:
  Screen* parent;
  uint16_t bgColor;
  Screen(Screen* p = nullptr, uint16_t bg = GxEPD_BLACK)
      : parent(p), bgColor(bg){};
  virtual void show() = 0;
  virtual void up() {}
  virtual void down() {}
  virtual void back() { Watchy::setScreen(parent); }
  virtual void menu() {}
};};
```

A screen encapsulates the logic to display one screenful of information, and to respond to button presses. To make a `Screen` instance, subclass `Screen` and implement the `show` method to display your screen. `show` is called with the screen cleared to your `bgColor` and text color set to the opposite of `bgColor.` After `show` is done painting, it should return and the display will do a partial refresh.

By default the screen does nothing on up, down, or menu button press, and goes up to it's parent (if any) on back button press. To enable the screen to respond to buttons override the corresponding button method in your subclass. For example, if there was a screen to show the time called `timeScreen` and another to display a content called `contentScreen` Where pressing the `Menu` button while displaying the time screen should display the content, and pressing `Back` while displaying the content screen should return to the time screen:

```c++
// ContentScreen.h
#include "Screen.h"
#include "Watchy.h"

class ContentScreen : public Screen {
    public:
    void show() { Watchy::display.print("This is the content."); }
    void back() { Watchy::setScreen(Watchy::defaultScreen); }
}

MenuScreen menuScreen;
```

```c++
//TimeScreen.h
#include "ContentScreen.h"
#include "Screen.h"
#include "Watchy.h"

class TimeScreen : public Screen {
    public:
    void show() { Watchy::display.print("This is the time."); }
    void menu() { Watchy::setScreen(&contentScreen); }
}

TimeScreen timeScreen;
```

And in the main program, set `timeScreen` as the default Watchy screen.

```c++
// main.cpp
#include "TimeScreen.h"
#include "Watchy.h"  //include the Watchy library

void setup() {
  Watchy::defaultScreen = &timeScreen;
  Watchy::init();
}

void loop() {} // this should never run, Watchy deep sleeps after init();
```

Manually coding the relationships between screens is tedious and error prone though. See [Watchy Screen demo](https://github.com/charles-haynes/Watchy-Screen-demo) for a nicer approach.

## Watchy changes

* Watchy is no longer a class, you don't have to instantiate it. Now it's a namespace, which means that any references to Watchy need to be prefixed with `Watchy::`
* You need to call `Watchy::init` from your setup function.
* You need to set `Watchy::defaultScreen` before calling `Watchy::init`

### Additions to Watchy for Screens

* Use `Watchy::setScreen(Screen *s)` to change screens.
* Use `Watchy::showWatchFace(bool partialRefresh)` to redisplay the current screen.

There are some helper functions if you want to do polling UI instead of sleeping and waiting for an event. Normally you should just use the event driven UI, but look at `SetTimeScreen.{h,cpp}` and `UpdateFWScreen.{h,cpp}` in [Watchy Screen demo](https://github.com/charles-haynes/Watchy-Screen-demo) for examples of how to implement a captive UI. `AccelerometerScreen.{h,cpp}` shows how to refresh the display more frequently than once a minute. Unfortunately all of those use a traditional polling loop, which is energy intensive. Eventually they should all be event driven.

### Caveats

Because of how deep sleep works, all screen instances must be globally persistent. The easiest way is to make each screen a global instance and let class initialization set them up. In particular the heap is not preserved across deep sleep, so you probably can't easily dynamically allocate screens.

The fields in a screen instance are not persistent across deep sleep. Do not expect to store persistent state in a screen instance. If you need persistence across sleep, make the state static and tag it with `RTC_DATA_ATTR` but this will only work for a single instance of a screen. If you have multiple instances of the same screen that need different persistent instance data you'll have do it some other way.

If you want multiple sub-screens for a single action you can instantiate local anonymous subclasses of `Screen` see `SetupWifiScreen.cpp` and `UpdateFWScreen.cpp` for examples.
