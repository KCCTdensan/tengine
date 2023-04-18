#include <tengine/rigidbody2d.hh>
#include <tengine/transform2.hh>
#include <tengine/vec2.hh>
using namespace tengine;

void RigidBody2D::update(Transform2 &objectTransform2) {
  {
    this->Acceleration.y = this->g;

    this->Velocity.y += this->Acceleration.y * this->deltaTime;

    Vec2 objectPosition = objectTransform2.getPosition();

    objectPosition.y += this->Velocity.y * this->deltaTime;
  }
}

void RigidBody2D::addForce(Vec2 &force) {
  // ma=F -> a=F/m
  this->Acceleration.x += force.x / this->mazz;
  this->Acceleration.y += force.y / this->mazz;
}