#include "RenderShape.h"

RenderShape::RenderShape() {
  points = new RenderPoint*[3];
  points[0] = new RenderPoint(0.0, 0.6);
  points[1] = new RenderPoint(-0.2, -0.3);
  points[2] = new RenderPoint(0.2, -0.3);
}

void RenderShape::render() {
  glColor3f(1.0f, 0.85f, 0.35f);
  glBegin(GL_TRIANGLES);
  {
    for(int i = 0; i < 3; i++) {
      points[i]->render();
    }
  }
  
  glEnd();
}
