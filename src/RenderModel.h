#pragma once

#include "platform.h"
#include "RenderObject.h"
#include "RenderPoint.h"
#include "RenderColor.h"

class RenderModel : public RenderObject {
  public:
    RenderObject **objects;
    RenderColor *color;

    RenderModel();
    void render();
};
