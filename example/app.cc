#include <iostream>
#include <tengine/tengine.hh>

tengine::Transform2D transform;
tengine::MeshRenderer Object;

void tengine::App::render() {
  Object.Draw();
  auto pos = transform.getPosition();
  pos.x += 0.002;
  transform.setPosition(pos);
}

auto main() -> int {
  auto game = tengine::App{};
  game.logger.log("game initialized");
  Object.SetTransform(&transform);
  game.start();
  game.logger.log("bye");
}
