#pragma once

#include <GLFW/glfw3.h>

#include <tengine/core/logger.hh>
#include <tengine/manager/assets_manager.hh>

namespace tengine {

class App {
  GLFWwindow* window;

 public:
  App();
  ~App();

  Logger& logger = Logger::get();
  AssetsManager assets;

  void start();
  void render();
};

}
