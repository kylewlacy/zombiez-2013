#include "RenderModel.h"

RenderModel::RenderModel() {
  verticies = new RenderVertex*[4];

  verticies[0] = new RenderVertex(0.0, 0.6, 0.0, Color(1, 0, 0));
  verticies[1] = new RenderVertex(-0.2, -0.3, 0.0, Color(0, 1, 0));
  verticies[2] = new RenderVertex(0.2, -0.3, 0.0,  Color(0, 0, 1));
  verticies[3] = NULL;

  indicies = new signed short[4];
  indicies[0] = 0;
  indicies[1] = 1;
  indicies[2] = 2;
  indicies[3] = -1;
}

void RenderModel::vboInit() {
  int vertexCount, indexCount;

  for(vertexCount = 0; verticies[vertexCount] != NULL; vertexCount++) { };
  glGenBuffers(1, &vertexBuffer);
  glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
  glBufferData(GL_ARRAY_BUFFER, sizeof(RenderVertex) * vertexCount, *verticies, GL_STATIC_DRAW);

  glGenBuffers(1, &indexBuffer);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
  for(indexCount = 0; indicies[indexCount] >= 0; indexCount++) { };
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned short) * indexCount, indicies, GL_STATIC_DRAW);
}

void RenderModel::render() {
  glColor3f(1.0f, 0.85f, 0.35f);
  glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);

  glEnableClientState(GL_VERTEX_ARRAY);
  glEnableClientState(GL_COLOR_ARRAY);
  glVertexPointer(3, GL_FLOAT, sizeof(RenderVertex), BUFFER_OFFSET(0));
  glColorPointer(4, GL_FLOAT, sizeof(RenderVertex), BUFFER_OFFSET(sizeof(Vertex)));
  glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_SHORT, BUFFER_OFFSET(0));
}
