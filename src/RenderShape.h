#pragma once

#include "RenderObject.h"
#include "platform.h"
#include "RenderPoint.h"

class RenderShape : public RenderObject {
  public:
    RenderPoint **points;

    RenderShape();
    void render();
};
