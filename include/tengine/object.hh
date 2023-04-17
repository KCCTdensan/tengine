#pragma once
#include "behaviour.hh"
#include "transform2.hh"
#include "vec2.hh"

namespace tengine {
class GameObject : public Behaviour {
  GameObject() = default;
  virtual ~GameObject() = default;

 public:
  Transform2 transform;
};
}