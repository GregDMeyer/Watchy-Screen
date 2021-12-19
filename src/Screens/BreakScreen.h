#pragma once

#include "Screen.h"

class BreakScreen : public Screen {
 public:
  BreakScreen(uint16_t bg = GxEPD_WHITE) : Screen(bg) {}
  void show() override;
};
