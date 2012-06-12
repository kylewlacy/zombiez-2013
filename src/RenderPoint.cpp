#include "RenderPoint.h"

RenderPoint::RenderPoint(double x_pos, double y_pos, double z_pos) {
  x = x_pos;
  y = y_pos;
  z = z_pos;
}

void RenderPoint::render() {
  glVertex3f(x, y, z);
}
