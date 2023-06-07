#pragma once

#include <tengine/2d/box_collider.hh>
#include <tengine/behaviour.hh>
#include <tengine/circle_collider2d.hh>
#include <tengine/mesh_renderer.hh>
#include <tengine/rigidbody2d.hh>
#include <tengine/transform2d.hh>
#include <tengine/vec2.hh>

namespace tengine {

class GameObject : public Behaviour {
  GameObject() = default;
  virtual ~GameObject() = default;

 public:
  Transform2D transform;
  BoxCollider2D collider;
};

}
