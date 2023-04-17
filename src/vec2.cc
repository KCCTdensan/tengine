#include <cmath>
#include <tengine/vec2.hh>

using namespace tengine;

double Vec2::dot(const Vec2 &vec) { return this->x * vec.x + this->y * vec.y; }

double Vec2::size() {
  return std::sqrt((this->x * this->x) + (this->y * this->y));
}

Vec2 Vec2::operator-(const Vec2 &vec) {
  this->x -= vec.x;
  this->y -= vec.y;
}
