#pragma once

#include <tengine/behaviour.hh>
#include <tengine/circle_collider2d.hh>
#include <tengine/mesh_renderer.hh>
#include <tengine/rigidbody2d.hh>
#include <tengine/transform2d.hh>
#include <tengine/vec2.hh>

namespace tengine {

class GameObject : public Behaviour {
 public:
  GameObject();
  virtual ~GameObject() = default;
  void setTransform(Transform2D t);
  MeshRenderer mesh;
  Transform2D transform;
};

}
