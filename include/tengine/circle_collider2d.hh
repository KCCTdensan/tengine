#pragma once

#include <tengine/physics_material2d.hh>
#include <tengine/transform2d.hh>

namespace tengine {

class CircleCollider2D {
  // こいつの設計どうすればいいんだろうか

  CircleCollider2D(Transform2D& transform2);

 protected:
  virtual void onCollitionEnter();

  virtual void onCollitionExit();

  virtual void onTriggerEnter();

  virtual void onTriggerExit();

 protected:
  PhysicsMaterial2D material;
  double radius = 1;
  bool enableCollider = false;
};

}
