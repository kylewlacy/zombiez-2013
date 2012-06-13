#pragma once

#include "platform.h"
#include "RenderObject.h"

class RenderPoint : public RenderObject {
  public:
    double x, y, z;

    RenderPoint(double _x, double _y, double _z = 0);
    void render();
};
