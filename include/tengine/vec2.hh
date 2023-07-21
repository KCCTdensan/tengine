#pragma once

namespace tengine {

class Vec2 {
 public:
  double x, y;

  double dot(const Vec2 &vec);
  double size();

  Vec2 operator-(const Vec2 &vec);
  Vec2 operator-=(const Vec2 &vec);
  Vec2 operator*(const double &scaler);
  Vec2 operator*=(const double &scaler);
  Vec2 operator*=(const Vec2 &vec);
};

}
