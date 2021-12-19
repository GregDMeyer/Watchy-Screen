#include "MoonScreen.h"

#include <stdlib.h>
#include <time.h>

#define _USE_MATH_DEFINES
#include <cmath>

#include <Fonts/FreeSans12pt7b.h>
#include "GetLocation.h"

#define MOON_RADIUS 50
#define MOON_PADDING 30
#define MOON_Y (MOON_RADIUS+MOON_PADDING)

using namespace Watchy;

// TODO: see if I can include okina and kahako?
const char* phase_names[] = {"HILO", "HOAKA", "KUKAHI", "KULUA", "KUKOLU",
  "KUPAU", "OLEKUKAHI", "OLEKULUA", "OLEKUKOLU", "OLEPAU", "HUNA", "MOHALA",
  "HUA", "AKUA", "HOKU", "MAHEALANI", "KULU", "LAAUKUKAHI", "LAAUKULUA",
  "LAAUPAU", "OLEKUKAHI", "OLEKULUA", "OLEPAU", "KALOAKUKAHI", "KALOAKULUA",
  "KALOAPAU", "KANE", "LONO", "MAULI", "MUKU"};

void printCentered(const char *txt, const uint16_t &yPos) {
  int16_t x1, y1;
  uint16_t w, h;
  display.getTextBounds(txt, 0, 0, &x1, &y1, &w, &h);
  display.setCursor((200-x1-w)/2, yPos);
  display.print(txt);
}

void MoonScreen::show() {
  // every 10 mins
  Watchy_Event::setUpdateInterval(10*SECS_PER_MIN*1000);

  // rough expression for the moon's phase through its cycle,
  // as a float between 0 and 1
  // (rough because the synodal period of the moon is not of
  // constant length)
  float phase = ((now()-614100)%2551443)/2551443.0;
  //float phase = (now()%30)/30.0; change every second, for testing/example

  display.fillScreen(bgColor);
  display.setTextColor(GxEPD_WHITE); // TODO

  // draw the moon!
  float start, end;
  if (phase < 0.5) {
    start = cos(M_PI*(1-2*phase));
    end = 1;
  } else {
    start = 1;
    end = cos(M_PI*(-1+2*phase));
  }

  display.drawCircle(100, MOON_Y, MOON_RADIUS, GxEPD_WHITE);
  for (int y=0; y<MOON_RADIUS; ++y) {
    int x = sqrt(MOON_RADIUS*MOON_RADIUS-y*y);
    display.drawLine(100-int(start*x), MOON_Y+y, 100+int(end*x), MOON_Y+y, GxEPD_WHITE);
    if (y>0) {
      display.drawLine(100-int(start*x), MOON_Y-y, 100+int(end*x), MOON_Y-y, GxEPD_WHITE);
    }
  }

  // write the moon phase
  display.setFont(&FreeSans12pt7b);
  printCentered(phase_names[int(30*phase)], 180);

  display.setTextColor(GxEPD_BLACK); // TODO

  loop(); // TESTING
}
