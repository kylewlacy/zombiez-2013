#include "RenderShape.h"

RenderShape::RenderShape() {
  objects = new RenderObject*[4];
  objects[0] = new RenderPoint(0.0, 0.6);
  objects[1] = new RenderPoint(-0.2, -0.3);
  objects[2] = new RenderPoint(0.2, -0.3);
  objects[3] = NULL;
  
  color = new RenderColor(255, 217, 89);
}

void RenderShape::render() {
  color->render();
  glBegin(GL_TRIANGLES);
  {
    for(int i = 0; objects[i] != NULL; i++) {
      objects[i]->render();
    }
  }
  
  glEnd();
}
