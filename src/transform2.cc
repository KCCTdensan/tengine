#include <cmath>
#include <tengine/transform2.hh>
using namespace tengine;

Vec2 Transform2::getPosition() const { return Position; }
void Transform2::setPosition(const Vec2 &position) { Position = position; }

Vec2 Transform2::getScale() const { return Scale; }
void Transform2::setScale(const Vec2 &scale) { Scale = scale; }

Vec2 Transform2::getRotate() const { return Rotate; }
void Transform2::setRotate(const Vec2 &rotate) { Rotate = rotate; }

double Transform2::distance(const Transform2 &transform2) {
  Vec2 transform2Position = transform2.getPosition();
  Vec2 difference = this->Position - transform2Position;
  return std::sqrt((difference.x * difference.x) +
                   (difference.y * difference.y));
}