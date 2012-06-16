#pragma once

#include "platform.h"
#include "RenderObject.h"

class RenderModel : public RenderObject {
  public:
    unsigned int vertexBuffer, indexBuffer;
    RenderVertex **verticies;
    long unsigned int *indicies;

    RenderModel();
    void vboInit();
    void render();
};
