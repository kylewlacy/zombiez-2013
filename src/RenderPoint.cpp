#include "RenderPoint.h"

RenderPoint::RenderPoint(double _x, double _y, double _z) {
  x = _x;
  y = _y;
  z = _z;
}

void RenderPoint::render() {
  glVertex3f(x, y, z);
}
