#include <GLFW/glfw3.h>

#include <tengine/core/app.hh>
#include <tengine/core/error.hh>
#include <tengine/core/logger.hh>
#include <tengine/utils.hh>

using namespace tengine;

App::App() {
  if (!glfwInit()) throw SystemError{"glfwInit() failed."};

  window = glfwCreateWindow(640, 480, name, nullptr, nullptr);
  if (!window) {
    glfwTerminate();
    throw SystemError{"glfwCreateWindow() failed."};
  }

  glfwMakeContextCurrent(window);
}

App::~App() { glfwTerminate(); }

void App::start() {
  while (!glfwWindowShouldClose(window)) {
    render();
    glfwSwapBuffers(window);
    glfwPollEvents();
  }
}

void App::render() { glClear(GL_COLOR_BUFFER_BIT); }
