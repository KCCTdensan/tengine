#pragma once

namespace tengine {

class Behaviour {
 private:
  /* data */

 public:
  Behaviour(/* args */);
  ~Behaviour();

 protected:
  virtual void start();
  virtual void update();
  virtual void awake();
};

}
