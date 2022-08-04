#include <GLFW/glfw3.h>

#include <tengine/app.hh>
#include <tengine/common.hh>
#include <tengine/logger.hh>

using namespace std::literals;
using namespace tengine;

std::unique_ptr<App> App::New(Window::Size winWidth, Window::Size winHeight,
                              std::string_view title) {
  return std::make_unique<App::DefaultApp>(winWidth, winHeight, title);
}

GLApp::GLApp() {
  if (!glfwInit()) {
    throw TengineSystemError{"glfwInit failed"};
  }
}

GLApp::GLApp(int winWidth, int winHeight, std::string_view title) : GLApp{} {
  createWindow(winWidth, winHeight, title);
  // setMainWin(win);
}

GLApp::~GLApp() { glfwTerminate(); }

AppWin GLApp::appendWindow(std::shared_ptr<Window> win) {
  // very wip
  return {123, win};
}

AppWin GLApp::createWindow(int winWidth, int winHeight,
                           std::string_view title) {
  auto win = std::make_shared<GLWindow>(winWidth, winHeight, title);
  return appendWindow(win);
}

AppWin GLApp::getWindow(AppWin::Id id) {
  // very wip
  return {123, nullptr};
}

std::vector<AppWin> GLApp::listWindow() {
  // very wip
  return {};
}

AppWin::Id GLApp::destroyWindow(AppWin::Id id) {
  // very wip
  return id;
}
