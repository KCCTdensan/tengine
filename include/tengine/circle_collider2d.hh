#pragma once

#include <tengine/transform2.hh>

namespace tengine {

class CircleCollider2D {
  // こいつの設計どうすればいいんだろうか

  CircleCollider2D(Transform2 &transform2);

 protected:
  void OnCollitionEnter();

  void OnCollitionExit();

  void OnCollitionStay();

 protected:
  Transform2 &transform;
  double radius = 1;
  bool onTrigger = false;
};

}
