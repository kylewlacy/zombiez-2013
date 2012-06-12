#include "platform.h"

class RenderPoint {
  public:
    double x, y, z;

    RenderPoint(double x_pos, double y_pos, double z_pos);
    void render();
};
