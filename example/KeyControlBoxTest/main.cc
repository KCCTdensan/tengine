#include <string>
#include <tengine/tengine.hh>
using namespace tengine;

class Player : public tengine::GameObject {
 public:
  void start() {
    if (!started) mesh.setColor({0, 0, 1});
    started = true;
  }
  void update() { mesh.render(); }
};

class BackGround : public tengine::GameObject {
 public:
  void start() {
    if (!started) {
      mesh.setColor({1, 1, 1});
      transform.setScale({10, 10});
    }
    started = true;
  }
  void update() { mesh.render(); }
};

Player player;

BackGround background;

void tengine::App::update() {
  player.start();
  auto pos = player.transform.getPosition();
  double speed = 0.02;
  if (this->getKey('W')) {
    pos.y += speed;
  }
  if (this->getKey('A')) {
    pos.x -= speed;
  }
  if (this->getKey('S')) {
    pos.y -= speed;
  }
  if (this->getKey('D')) {
    pos.x += speed;
  }
  player.transform.setPosition(pos);
  background.update();
  player.update();
  logger.log(getMousePos());
}