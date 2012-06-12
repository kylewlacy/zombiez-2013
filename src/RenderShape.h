#pragma once

#include "platform.h"
#include "RenderObject.h"
#include "RenderPoint.h"
#include "RenderColor.h"

class RenderShape : public RenderObject {
  public:
    RenderPoint **points;
    RenderColor *color;

    RenderShape();
    void render();
};
