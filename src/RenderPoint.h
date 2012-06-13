#pragma once

#include "platform.h"
#include "RenderObject.h"

class RenderPoint : public RenderObject {
  public:
    double x, y, z;

    RenderPoint(double x_pos, double y_pos, double z_pos = 0);
    void render();
};
