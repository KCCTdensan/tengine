#include <tengine/rigidbody2d.hh>
#include <tengine/transform2d.hh>
#include <tengine/vec2.hh>

using namespace tengine;

void RigidBody2D::update(Transform2D &objectTransform2) {
  {
    this->acceleration.y = this->g;

    this->velocity.y += this->acceleration.y * this->deltaTime;

    Vec2 objectPosition = objectTransform2.getPosition();

    objectPosition.y += this->velocity.y * this->deltaTime;
  }
}

void RigidBody2D::addForce(Vec2 &force) {
  // ma=F -> a=F/m
  this->acceleration.x += force.x / this->mazz;
  this->acceleration.y += force.y / this->mazz;
}
