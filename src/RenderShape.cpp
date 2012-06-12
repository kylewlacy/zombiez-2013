#include "RenderShape.h"

RenderShape::RenderShape() {
  points = new RenderPoint*[3];
}

void RenderShape::render() {
  glColor3f(1.0f, 0.85f, 0.35f);
  glBegin(GL_TRIANGLES);
  {
    glVertex3f(0.0, 0.6, 0.0);
    glVertex3f(-0.2, -0.3, 0.0);
    glVertex3f(0.2, -0.3, 0.0);
  }
  glEnd();
}
