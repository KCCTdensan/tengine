#pragma once

#include <GLFW/glfw3.h>

#include <tengine/logger.hh>

namespace tengine {

class App {
  GLFWwindow* window;

 public:
  App();
  ~App();

  Logger& logger = Logger::get();

  void start();
  void render();
};

}
