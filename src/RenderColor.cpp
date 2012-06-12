#include "RenderColor.h"

RenderColor::RenderColor(unsigned char red, unsigned char green, unsigned char blue) {
  r = red;
  g = green;
  b = blue;
}

void RenderColor::render() {
  glColor3f((float)(r/255.0f), (float)(g/255.0f), (float)(b/255.0f));
}
