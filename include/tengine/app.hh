#pragma once

#include <GL/gl.h>
#include <GLFW/glfw3.h>

#include <tengine/logger.hh>
#include <tengine/vec2.hh>

namespace tengine {

class App {
  GLFWwindow* window;

 public:
  App();
  ~App();

  Logger& logger = Logger::get();

  void start();
  void render();
  void update();
  bool getKey(char KeyCode);
  Vec2 getMousePos();
};

}
