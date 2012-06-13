#include "RenderColor.h"

RenderColor::RenderColor(unsigned char _r, unsigned char _g, unsigned char _b) {
  r = _r;
  g = _g;
  b = _b;
}

void RenderColor::render() {
  glColor3f((float)(r/255.0f), (float)(g/255.0f), (float)(b/255.0f));
}
