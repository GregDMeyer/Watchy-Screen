#include "CarouselScreen.h"
#include "Events.h"
#include "GetLocation.h"
#include "IconScreen.h"
#include "ImageScreen.h"
#include "MenuScreen.h"
#include "OptimaLTStd22pt7b.h"
#include "OTAScreen.h"
#include "SetLocationScreen.h"
#include "SetTimeScreen.h"
#include "SetupWifiScreen.h"
#include "ShowBatteryScreen.h"
#include "ShowWifiScreen.h"
#include "SyncTime.h"
#include "SyncTimeScreen.h"
#include "TimeScreen.h"
#include "MoonScreen.h"
#include "UpdateFWScreen.h"
#include "Watchy.h"
#include "WatchyErrors.h"
#include "icons.h"

#include <time.h>

SetTimeScreen setTimeScreen;
SetupWifiScreen setupWifiScreen;
UpdateFWScreen updateFWScreen;
SyncTimeScreen syncTimeScreen;
SetLocationScreen setLocationScreen;
OTAScreen otaScreen;

MenuItem menuItems[] = {{"Set Time", &setTimeScreen},
                        {"Setup WiFi", &setupWifiScreen},
                        {"Update (OTA)", &otaScreen},
                        {"Update (BLE)", &updateFWScreen},
                        {"Sync Time", &syncTimeScreen},
                        {"Set Location", &setLocationScreen}};

MenuScreen menu(menuItems, sizeof(menuItems) / sizeof(menuItems[0]));

TimeScreen timeScreen;
MoonScreen moonScreen;
IconScreen battery(&rle_battery, "battery", OptimaLTStd22pt7b);
IconScreen wifi(&rle_wifi, "wifi", OptimaLTStd22pt7b);
IconScreen settings(&rle_settings, "settings", OptimaLTStd22pt7b);
ShowBatteryScreen showBattery;
ShowWifiScreen showWifi;

CarouselItem carouselItems[] = {{&timeScreen, nullptr},
				{&moonScreen, nullptr},
                                {&battery, &showBattery},
                                {&wifi, &showWifi},
                                {&settings, &menu}};

CarouselScreen carousel(carouselItems,
                        sizeof(carouselItems) / sizeof(carouselItems[0]));

Watchy_Event::BackgroundTask timeSync("timeSync", [](void* p) {
  Watchy_SyncTime::syncTime(Watchy_GetLocation::currentLocation.timezone);
});

Watchy_Event::BackgroundTask getLocation("getLocation", [](void* p) {
  Watchy_GetLocation::getLocation();
});

void setup() {
  Serial.begin(115200);
#if 0
  esp_log_level_set("*", static_cast<esp_log_level_t>(CORE_DEBUG_LEVEL));
#endif
  log_d(); // fail if debugging macros not defined

  Watchy_Event::start();

  // initializing time and location can be a little tricky, because the
  // calls can fail for a number of reasons, but you don't want to just
  // keep trying because you can't know if the error is transient or
  // persistent. So whenever we wake up, try to sync the time and location
  // if they haven't ever been synced. If there is a persistent failure
  // this can drain your battery...
  if (Watchy_SyncTime::lastSyncTimeTS < SECS_YR_2000) {
    timeSync.begin();
  }

  if (Watchy_GetLocation::lastGetLocationTS < SECS_YR_2000) {
    getLocation.begin();
  }
  if (Watchy::screen == nullptr) {
    Watchy::screen = &carousel;
  }
  Watchy::init();
}

void loop() {
  // should never be called, but if it is we want to know how often
  static int count;
  count++;
  if (count % 10000 == 0) {
    log_i("%d", count/10000);
  }
  Watchy_Event::handle();
}
