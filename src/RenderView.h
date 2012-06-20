#pragma once

#include "platform.h"
#include "RenderObject.h"
#include "RenderPrimitive.h"

class RenderView {
  public:
    RenderView();
    void render();
    
    bool vboInit;
    RenderPrimitive** objects;
};
