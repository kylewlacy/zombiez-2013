#pragma once

#include "platform.h"
#include "RenderObject.h"

class RenderPrimitive : public RenderObject {
  public:
    unsigned int vertexBuffer, indexBuffer;
    RenderVertex **verticies;
    signed short *indicies;

    RenderPrimitive();
    void vboInit();
    void render();

  protected:
    GLenum _renderMode;
};
