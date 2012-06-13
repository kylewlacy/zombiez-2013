#pragma once

#include "platform.h"
#include "RenderObject.h"

class RenderColor : public RenderObject {
  public:
    unsigned char r, g, b;

    RenderColor(unsigned char red = 255, unsigned char green = 255, unsigned char blue  = 255);
    void render();
};
