#include <GLFW/glfw3.h>

#include <tengine/app.hh>
#include <tengine/error.hh>
#include <tengine/logger.hh>
#include <tengine/utils.hh>
#include <tengine/vec2.hh>

using namespace tengine;

App::App() {
  if (!glfwInit()) throw SystemError{"glfwInit() failed."};

  window = glfwCreateWindow(640, 400, name, nullptr, nullptr);
  if (!window) {
    glfwTerminate();
    throw SystemError{"glfwCreateWindow() failed."};
  }

  glfwMakeContextCurrent(window);
}

App::~App() { glfwTerminate(); }

void App::render() {
  glClear(GL_COLOR_BUFFER_BIT);
  start();
  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    update();
    glfwSwapBuffers(window);
    glfwPollEvents();
  }
}

void App::start() {}

void App::update() {}

bool App::getKey(char KeyCode) { return glfwGetKey(this->window, KeyCode); }

Vec2 App::getMousePos() {
  Vec2 res;
  glfwGetCursorPos(window, &(res.x), &(res.y));
  return res;
}

// glfwGetPrimaryMonitor()