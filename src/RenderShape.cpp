#include "RenderShape.h"

RenderShape::RenderShape() {
  points = new RenderPoint*[3];
  points[0] = new RenderPoint(0.0, 0.6);
  points[1] = new RenderPoint(-0.2, -0.3);
  points[2] = new RenderPoint(0.2, -0.3);
  
  color = new RenderColor(255, 217, 89);
}

void RenderShape::render() {
  color->render();
  glBegin(GL_TRIANGLES);
  {
    for(int i = 0; i < 3; i++) {
      points[i]->render();
    }
  }
  
  glEnd();
}
