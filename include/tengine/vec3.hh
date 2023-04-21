#pragma once

namespace tengine {

class Vec3 {
 public:
  float x, y, z;
  float dot(const Vec3 &vec) {
    return this->x * vec.x + this->y * vec.y + this->x * vec.z;
  }
};

}
