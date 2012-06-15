#pragma once

#include "platform.h"

class RenderObject {
  public:
    struct Vertex {
      float x, y, z;
    };

    struct Color {
      float r, g, b, a;
    };

    struct RenderVertex {
      float x, y, z;
      float u, v;
      Vertex normal;
      Color color;

      RenderVertex(float _x = 0, float _y = 0, float _z = 0) {
        x = _x;
        y = _y;
        z = _z;
      }
    };

    virtual void render() { };
};
