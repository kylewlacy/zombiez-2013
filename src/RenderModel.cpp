#include "RenderModel.h"

RenderModel::RenderModel() {
  verticies = new RenderVertex*[5];

  verticies[0] = new RenderVertex(0.0, 0.6, 0.0);
  verticies[1] = new RenderVertex(-0.2, -0.3, 0.0);
  verticies[2] = new RenderVertex(0.2, -0.3, 0.0);
  verticies[3] = new RenderVertex(0.0, 0.6, 0.0);
  verticies[4] = new RenderVertex(0.0, 0.6, 0.0);

  indicies = new unsigned short[3];
  indicies[0] = 0;
  indicies[1] = 1;
  indicies[2] = 2;
}

void RenderModel::vboInit() {
  glGenBuffers(1, &vertexBuffer);
  glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
  glBufferData(GL_ARRAY_BUFFER, sizeof(RenderVertex) * 5, verticies, GL_STATIC_DRAW);

  glGenBuffers(1, &indexBuffer);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned short) * 3, indicies, GL_STATIC_DRAW);
}

void RenderModel::render() {
  glColor3f(1.0f, 0.85f, 0.35f);
  glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);

  glEnableClientState(GL_VERTEX_ARRAY);
  glVertexPointer(3, GL_FLOAT, sizeof(RenderVertex), BUFFER_OFFSET(0));
  glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_SHORT, BUFFER_OFFSET(0));
}
