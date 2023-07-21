#include <string>
#include <tengine/tengine.hh>
using namespace tengine;

class Player : public tengine::GameObject {
 public:
  void start() { mesh.setColor({0, 0, 1}); }
  void update() { mesh.render(); }
};

class BackGround : public tengine::GameObject {
 public:
  void start() {
    mesh.setColor({1, 1, 1});
    transform.setScale({10, 10});
  }
  void update() { mesh.render(); }
};

Player player;

BackGround background;

void tengine::App::start() {
  player.start();
  background.start();
}

void tengine::App::update() {
  auto pos = player.transform.getPosition();
  auto aaa = getMousePos();
  aaa.y = 954 - aaa.y;
  aaa.x -= 320;
  player.transform.setPosition(aaa * 0.002);
  background.update();
  player.update();
  logger.log(getMousePos());
}