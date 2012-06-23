#pragma once

#include "platform.h"
#include "RenderObject.h"
#include "RenderPrimitive.h"

class RenderView {
  public:
    float rotation;
    RenderView();
    
    void prepare();
    void update();
    void render();
    
    RenderPrimitive** objects;
};
