#pragma once

#include "platform.h"
#include "RenderObject.h"
#include "RenderShape.h"

class RenderView {
  public:
    RenderView();
    void render();
  protected:
    RenderObject** objects;
};
