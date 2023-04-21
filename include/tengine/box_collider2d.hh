#pragma once

#include <tengine/transform2d.hh>

namespace tengine {

class BoxCollider2D {
  BoxCollider2D(Transform2D &transform2);

 protected:
  virtual void onCollitionEnter();
  virtual void onCollitionExit();
  virtual void onTriggerEnter();
  virtual void onTriggerExit();

 protected:
  double width = 1;
  double height = 1;
  bool enableCollider = false;
};

};
