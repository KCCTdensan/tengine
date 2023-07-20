#include <tengine/mesh_renderer.hh>
#include <tengine/vec3.hh>
using namespace tengine;

MeshRenderer::MeshRenderer(Transform2D *init) { this->transform = init; }

MeshRenderer::MeshRenderer() {}

void MeshRenderer::SetTransform(Transform2D *_transform) {
  this->transform = _transform;
}

void MeshRenderer::Square(Transform2D *_transform, Vec2 size, Vec3 color) {
  auto scale = (*_transform).getScale();
  scale *= size;
  auto pos = (*_transform).getPosition();

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

void MeshRenderer::Draw() {
  glLoadIdentity();
  glTranslatef(0.0f, 0.0f, -1.0f);
  Vec2 size = {1, 1};
  Vec3 color = {1, 1, 1};
  Square(this->transform, size, color);
}