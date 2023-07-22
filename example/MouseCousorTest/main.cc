#include <string>
#include <tengine/tengine.hh>
using namespace tengine;

class Player : public tengine::GameObject {
 public:
  void start() { mesh.setColor({0, 0, 1}); }
  void update() { mesh.render(); }
  bool check(Transform2D &t) {
    if (t.getPosition() == transform.getPosition()) {
      mesh.setColor({1, 0, 0});
      return true;
    } else {
      mesh.setColor({0, 0, 1});
      return false;
    }
  }
};

class BackGround : public tengine::GameObject {
 public:
  void start() { mesh.setColor({1, 1, 1}); }
  void update() { mesh.render(); }
};

Player player;

BackGround background;

KeyCode keycode;

bool gameclear = false;

unsigned long long timer = 0;

void tengine::App::start() {
  player.start();
  background.start();
  logger.log("マウスを動かして青の四角を白の四角に完全に合わせよう!");
}

void tengine::App::update() {
  if (!gameclear) {
    auto aaa = getMousePos();
    aaa.y = 954 - aaa.y;
    aaa.x -= 320;
    player.transform.setPosition(aaa * 0.002);
    timer++;
    if (player.check(background.transform)) {
      logger.log("ゲームクリア");
      logger.log("あなたがクリアするのにかかったフレーム数:" +
                 std::to_string(timer));
      logger.log("ゲームを終了するにはQキーを入力");
      gameclear = true;
    }
  } else {
    if (getKey(keycode.Q)) {
      quit();
      return;
    }
  }
  background.update();
  player.update();
}