#pragma once

#include <tengine/transform2d.hh>
#include <tengine/vec2.hh>

namespace tengine {

class RigidBody2D {
 public:
  void update(Transform2D &objectTransform2);
  void addForce(Vec2 &force);

 protected:
  double g = -9.81;
  double mazz = 1;
  double deltaTime = 0.01;
  Vec2 acceleration = {0, 0};
  Vec2 velocity = {0, 0};
  double rotAccel = 0;
};

}
