#include "app.hh"

#include <GLFW/glfw3.h>

#include "common.hh"
#include "logger.hh"

using namespace tengine;

std::unique_ptr<App> App::New(int winWidth, int winHeight,
                              std::string_view title) {
  return std::unique_ptr<App>{new App{winWidth, winHeight, title}};
}

App::App(int winWidth, int winHeight, std::string_view title) {
  this->_glfw = std::unique_ptr<_GLFW>{new _GLFW};
  this->_win = std::unique_ptr<Window>{
      new Window{winWidth, winHeight, std::string{title}}};
}

App::~App() = default;

_GLFW::_GLFW() {
  if (!glfwInit()) {
    throw TengineSystemError{"glfwInit failed"};
  }
}

_GLFW::~_GLFW() { glfwTerminate(); }
