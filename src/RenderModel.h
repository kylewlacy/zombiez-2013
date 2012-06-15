#pragma once

#include "platform.h"
#include "RenderObject.h"

class RenderModel : public RenderObject {
  public:
    RenderVertex **verticies;

    RenderModel();
    void render();
};
