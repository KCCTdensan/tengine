#pragma once
#include <tengine/transform2.hh>

namespace tengine {
class RigidBody2D {
 public:
  void Update(Transform2 &transform2);

 protected:
  double g = -9.81;
};
}