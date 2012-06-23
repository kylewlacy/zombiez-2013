#include "RenderView.h"

RenderView::RenderView() {
  objects = new RenderPrimitive*[2];
  objects[0] = new RenderPrimitive();
  objects[1] = NULL;
}

void RenderView::prepare() {
  for(int i = 0; objects[i] != NULL; i++) {
    objects[i]->prepare();
  }
}



void RenderView::update() {
  rotation+=1.0f;
}

void RenderView::render() {
  printf("%f\r\n", rotation);
  glLoadIdentity();

  glClearColor(0, 0, 0, 0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glColor3f(1.0, 1.0, 1.0);
  glRotatef(rotation, 1.0f, 0.0f, 0.0f);
  for(int i = 0; i < 1; i++) {
    objects[i]->render();
  }



  glFlush();
}
