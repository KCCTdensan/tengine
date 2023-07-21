#pragma once
#include <GL/gl.h>
#include <GLFW/glfw3.h>

#include <tengine/transform2d.hh>
#include <tengine/vec3.hh>

namespace tengine {

class MeshRenderer {
 protected:
  Transform2D *t;
  Vec2 size = {1, 1};
  Vec3 color = {1, 1, 1};

 public:
  MeshRenderer(Transform2D *init);
  MeshRenderer();
  void setTransform(Transform2D *s);
  Vec3 getColor();
  void setColor(Vec3 c);
  Vec2 getSize();
  void setSize(Vec2 s);
  void square();
  void render();
};
}
