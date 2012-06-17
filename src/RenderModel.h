#pragma once

#include "platform.h"
#include "RenderObject.h"

class RenderModel : public RenderObject {
  public:
    unsigned int vertexBuffer, indexBuffer;
    RenderVertex **verticies;
    unsigned short *indicies;

    RenderModel();
    void vboInit();
    void render();
};
