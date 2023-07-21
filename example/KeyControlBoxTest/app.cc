#include <iostream>
#include <string>
#include <tengine/tengine.hh>

auto main() -> int {
  auto game = tengine::App{};
  game.logger.log("game initialized");
  game.start();
  game.logger.log("bye");
}
