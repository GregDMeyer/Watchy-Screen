#include "TimeScreen.h"

#include <stdlib.h>
#include <time.h>

#include "NunitoSans_Bold28pt7b.h"
#include "NunitoSans_Light28pt7b.h"
#include "OptimaLTStd22pt7b.h"
#include "OptimaLTStd7pt7b.h"
#include "OptimaLTStd_Black32pt7b.h"
#include "GetLocation.h"

using namespace Watchy;

const char *smallNumbers[] = {"",        "one",       "two",      "three",
                              "four",    "five",      "six",      "seven",
                              "eight",   "nine",      "ten",      "eleven",
                              "twelve"};

const char *decades[] = {"oh", nullptr, "twenty", "thirty", "forty", "fifty"};

const char *teensone [] =
  {"ten", "eleven", "twelve", "thir", "four",
   "fif", "six", "seven", "eight", "nine"};

const char *teenstwo [] =
  {"", "", "", "teen", "teen", "teen",
   "teen", "teen", "teen", "teen", "teen"};

void TimeScreen::show() {
  tm t;
  time_t tt = now();
  localtime_r(&tt, &t);

  display.fillScreen(bgColor);

  // hours
  display.setFont(&NunitoSans_Bold28pt7b);
  display.setCursor(8, 42);
  display.print(smallNumbers[(t.tm_hour + 11) % 12 + 1]);

  display.setFont(&NunitoSans_Light28pt7b);
  display.setCursor(8, 89);

  // exactly on the hour
  if (t.tm_min == 0) {
    if (t.tm_hour == 0) {
      display.print("midnight");
    } else if (t.tm_hour == 12) {
      display.print("noon");
    } else {
      display.print("o'clock");
    }
  }
  // minute is in the teens
  else if (10 <= t.tm_min && t.tm_min < 20) {
    display.print(teensone[t.tm_min-10]);
  }
  // minute is anything else
  else {
    display.print(decades[t.tm_min/10]);
  }

  // for all minutes not 10, 11, 12 we need a second line
  if (t.tm_min < 10 || t.tm_min > 12) {
    display.setCursor(8, 136);

    // teens
    if (t.tm_min < 20 && t.tm_min > 12) {
      display.print(teenstwo[t.tm_min-10]);
    }

    // all other numbers
    else {
      display.print(smallNumbers[t.tm_min%10]);
    }
  }

  // date
  display.setCursor(0, 195);
  display.setFont(OptimaLTStd7pt7b);
  display.print(&t, "%a, %B %d %Y %Z");
}
