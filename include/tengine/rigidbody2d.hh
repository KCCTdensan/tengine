#pragma once
#include <tengine/transform2.hh>
#include <tengine/vec2.hh>

namespace tengine {
class RigidBody2D {
 public:
  void Update(Transform2 &objectTransform2);

 protected:
  double g = -9.81;
  double e = 0;
  double deltaTime = 0.01;
  Vec2 Acceleration = {0, 0};
  Vec2 Velocity = {0, 0};
  double RotAccel = 0;
};
}