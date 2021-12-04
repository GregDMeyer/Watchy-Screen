#pragma once

#include "Screen.h"

class MoonScreen : public Screen {
 public:
  MoonScreen(uint16_t bg = GxEPD_BLACK) : Screen(bg) {}
  void show() override;
};
