#include <cmath>
#include <tengine/vec2.hh>

using namespace tengine;

double Vec2::dot(const Vec2 &vec) { return this->x * vec.x + this->y * vec.y; }

double Vec2::size() {
  return std::sqrt((this->x * this->x) + (this->y * this->y));
}

Vec2 Vec2::operator-(const Vec2 &vec) {
  Vec2 res = (*this);
  res.x -= vec.x;
  res.y -= vec.y;
  return res;
}

Vec2 Vec2::operator-=(const Vec2 &vec) {
  (*this) = (*this) - vec;
  return (*this);
}

Vec2 Vec2::operator*(const double &scaler) {
  Vec2 res = *this;
  res.x *= scaler;
  res.y *= scaler;
  return res;
}

Vec2 Vec2::operator*=(const double &scaler) {
  (*this) = (*this) * scaler;
  return (*this);
}

Vec2 Vec2::operator*=(const Vec2 &vec) {
  this->x *= vec.x;
  this->y *= vec.y;
  return (*this);
}