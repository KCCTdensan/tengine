#include <string>
#include <tengine/keycode.hh>
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

KeyCode keycode;

void tengine::App::start() {
  player.start();
  background.start();
}

void tengine::App::update() {
  auto pos = player.transform.getPosition();
  double speed = 0.02;
  if (getKey(keycode.W)) {
    pos.y += speed;
  }
  if (getKey(keycode.A)) {
    pos.x -= speed;
  }
  if (getKey(keycode.S)) {
    pos.y -= speed;
  }
  if (getKey(keycode.D)) {
    pos.x += speed;
  }
  player.transform.setPosition(pos);
  background.update();
  player.update();
}