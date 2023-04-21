#pragma once

#include <tengine/vec2.hh>

namespace tengine {

class Transform2D {
 public:
  Vec2 getPosition() const;
  void setPosition(const Vec2 &position);

  Vec2 getScale() const;
  void setScale(const Vec2 &scale);

  Vec2 getRotate() const;
  void setRotate(const Vec2 &rotate);

  double distance(const Transform2D &transform2);

 protected:
  Vec2 Position = {0, 0};
  Vec2 Scale = {1, 1};
  Vec2 Rotate = {0, 0};
};

}
