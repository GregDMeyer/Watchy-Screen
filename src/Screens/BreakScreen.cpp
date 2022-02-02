#include "BreakScreen.h"

#include <stdlib.h>
#include <time.h>

#include "NunitoSans_Bold28pt7b.h"
#include "NunitoSans_Light28pt7b.h"
#include "OptimaLTStd22pt7b.h"
#include "OptimaLTStd7pt7b.h"
#include "OptimaLTStd_Black32pt7b.h"
#include "GetLocation.h"

using namespace Watchy;

#define WORK_MIN 25
#define BREAK_MIN 5

RTC_DATA_ATTR int last_time = 0;
RTC_DATA_ATTR int end_time = 0;
RTC_DATA_ATTR bool in_break = false;

void BreakScreen::show() {
  Watchy_Event::setUpdateInterval(SECS_PER_MIN*1000);
  tm t;
  time_t tt = now();
  localtime_r(&tt, &t);

  display.fillScreen(bgColor);

  // this means we just switched to the screen and need to reset
  if (end_time == 0 || end_time < now() || now() - last_time > 65) {
    end_time = now() + WORK_MIN*60 + 30;
    in_break = false;
  }
  last_time = now();

  int mins_left = (end_time - now())/60;

  // vibrate if time's up
  if (mins_left <= 0) {
    // toggle in_break
    in_break = !in_break;

    if (in_break) {
      end_time = now() + BREAK_MIN*60 + 30;
    } else {
      end_time = now() + WORK_MIN*60 + 30;
    }

    // cycles of 3 buzzes each
    pinMode(VIB_MOTOR_PIN, OUTPUT);
    for (int c = 0; c < (in_break ? 5 : 3); c++) {
      for (int b = 0; b < 3; b++) {
        digitalWrite(VIB_MOTOR_PIN, true);
        delay(100);
        digitalWrite(VIB_MOTOR_PIN, false);
        delay(100);
      }
      delay(600);
    }
  }

  mins_left = (end_time - now())/60;

  // hours
  display.setFont(&NunitoSans_Light28pt7b);
  display.setCursor(8, 42);
  display.print(mins_left);
  display.print(" min");

  display.setCursor(8, 89);
  if (in_break) {
    display.print("break");
  } else {
    display.print("left");
  }

  // print time
  int display_hr = t.tm_hour;
  display_hr = ((display_hr-1)%12)+1; // 12 hr

  // sketchy manual centering
  display.setFont(&NunitoSans_Bold28pt7b);

  if (display_hr < 10) {
    display.setCursor(40, 160);
  } else {
    display.setCursor(20, 160);
  }
  display.print(display_hr);
  display.print(&t, ":%M");

}
