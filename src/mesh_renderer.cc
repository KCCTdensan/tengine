#include <tengine/mesh_renderer.hh>
#include <tengine/vec3.hh>
using namespace tengine;

MeshRenderer::MeshRenderer(Transform2D *init) { this->t = init; }

MeshRenderer::MeshRenderer() {}

void MeshRenderer::setTransform(Transform2D *s) { this->t = s; }

void MeshRenderer::setColor(Vec3 c) { color = c; }

Vec3 MeshRenderer::getColor() { return color; }

void MeshRenderer::square() {
  auto scale = (*t).getScale();
  scale *= size;
  auto pos = (*t).getPosition();

  double x1 = pos.x - scale.x / 2, x2 = pos.x + scale.x / 2;
  double y1 = pos.y - scale.y / 2, y2 = pos.y + scale.y / 2;
  glBegin(GL_QUADS);
  glColor3f(color.x, color.y, color.z);
  glVertex2f(x1, y2);  // 左下
  glVertex2f(x2, y2);  // 右下
  glVertex2f(x2, y1);  // 右上
  glVertex2f(x1, y1);  // 左上
  glEnd();
}

void MeshRenderer::render() {
  glLoadIdentity();
  glTranslatef(0.0f, 0.0f, -1.0f);
  square();
}