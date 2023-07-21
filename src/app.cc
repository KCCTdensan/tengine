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

void App::start() {
  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    render();
    glfwSwapBuffers(window);
    glfwPollEvents();
  }
}

void App::render() {
  glClear(GL_COLOR_BUFFER_BIT);
  update();
}

void App::update() {}

bool App::getKey(char KeyCode) { return glfwGetKey(this->window, KeyCode); }

Vec2 App::getMousePos() {
  Vec2 res;
  glfwGetCursorPos(window, &(res.x), &(res.y));
  return res;
}

// glfwGetPrimaryMonitor()