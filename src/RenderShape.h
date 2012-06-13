#pragma once

#include "platform.h"
#include "RenderObject.h"
#include "RenderPoint.h"
#include "RenderColor.h"

class RenderShape : public RenderObject {
  public:
    RenderObject **objects;
    RenderColor *color;

    RenderShape();
    void render();
};
