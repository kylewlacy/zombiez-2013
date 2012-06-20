#include "RenderView.h"

RenderView::RenderView() {
  vboInit = 0;

  objects = new RenderPrimitive*[1];
  objects[0] = new RenderPrimitive();
}

void RenderView::render() {
  glClearColor(0, 0, 0, 0);
  glClear(GL_COLOR_BUFFER_BIT);


  glColor3f(1.0, 1.0, 1.0);
  for(int i = 0; i < 1; i++) {
    if(!vboInit) {
      objects[i]->vboInit();
    }
    objects[i]->render();
  }

  vboInit = true;

  glFlush();
}
