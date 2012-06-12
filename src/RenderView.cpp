#include "RenderView.h"

RenderView::RenderView() {
  objects = (RenderObject**)new RenderShape*[1];
  objects[0] = new RenderShape();
}

void RenderView::render() {
  glClearColor(0, 0, 0, 0);
  glClear(GL_COLOR_BUFFER_BIT);

  objects[0]->render();

  glFlush();
}