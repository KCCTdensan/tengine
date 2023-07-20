#pragma once

namespace tengine {

class Vec3 {
 public:
  double x, y, z;
  double dot(const Vec3 &vec);
  double size();
};

}
