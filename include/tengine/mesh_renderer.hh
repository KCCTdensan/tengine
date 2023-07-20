#pragma once
#include <GL/gl.h>
#include <GLFW/glfw3.h>

#include <tengine/transform2d.hh>
#include <tengine/vec3.hh>

namespace tengine {

class MeshRenderer {
  Transform2D *transform;

 public:
  MeshRenderer(Transform2D *init);
  MeshRenderer();
  void SetTransform(Transform2D *_transform);
  void Draw();
  void Square(Transform2D *_transform, Vec2 size, Vec3 color);
};
}
