#include <cmath>
#include <tengine/vec3.hh>
using namespace tengine;

double Vec3::dot(const Vec3 &vec) {
  return this->x * vec.x + this->y * vec.y + this->x * vec.z;
}

double Vec3::size() {
  return sqrtl((this->x) * (this->x) + (this->y) * (this->y) +
               (this->z) * (this->z));
}