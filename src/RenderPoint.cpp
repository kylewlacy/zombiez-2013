#include "RenderPoint.h"


RenderPoint::RenderPoint(double x_pos = 0, double y_pos = 0, double z_pos = 0) {
  x = x_pos;
  y = y_pos;
  z = z_pos;
}

void RenderPoint::render() {
  glVertex3f(x, y, z);
}
