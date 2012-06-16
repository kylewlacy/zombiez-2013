#pragma once

#include "platform.h"
#include "RenderObject.h"
#include "RenderModel.h"

class RenderView {
  public:
    RenderView();
    void render();
    
    bool vboInit;
    RenderModel** objects;
};
