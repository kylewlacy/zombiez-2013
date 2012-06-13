#pragma once

#include "platform.h"
#include "RenderObject.h"

class RenderColor : public RenderObject {
  public:
    unsigned char r, g, b;

    RenderColor(unsigned char _r = 255, unsigned char _g = 255, unsigned char _b  = 255);
    void render();
};
