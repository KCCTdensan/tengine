#include <GLFW/glfw3.h>

#include <tengine/app.hh>
#include <tengine/common.hh>
#include <tengine/error.hh>
#include <tengine/logger.hh>

using namespace std::literals;
using namespace tengine;

App::App() {
  if (!glfwInit()) throw SystemError{"glfwInit() failed."};

  glfwCreateWindow(640, 480, "", nullptr, nullptr);
}
