#include <cmath>
#include <tengine/transform2d.hh>
using namespace tengine;

Vec2 Transform2D::getPosition() const { return Position; }
void Transform2D::setPosition(const Vec2 &position) { Position = position; }

Vec2 Transform2D::getScale() const { return Scale; }
void Transform2D::setScale(const Vec2 &scale) { Scale = scale; }

Vec2 Transform2D::getRotate() const { return Rotate; }
void Transform2D::setRotate(const Vec2 &rotate) { Rotate = rotate; }

double Transform2D::distance(const Transform2D &transform2) {
  Vec2 transform2Position = transform2.getPosition();
  Vec2 difference = this->Position - transform2Position;
  return std::sqrt((difference.x * difference.x) +
                   (difference.y * difference.y));
}