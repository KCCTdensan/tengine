#pragma once

#include <tengine/transform2.hh>

namespace tengine {

class Collider2D {
  // こいつの設計どうすればいいんだろうか

  //  Collider2D(Transform2 &transform2) { transform = transform2; }

 protected:
  Transform2 &transform;
};

}
