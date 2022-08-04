#include <tengine/window.hh>

using namespace tengine;

GLWindow::GLWindow(Window::Size width, Window::Size height,
                   std::string_view title)
    : _width{width}, _height{height} {
  _title = std::string{title};
  _glwin = glfwCreateWindow(_width, _height, _title.c_str(), NULL, NULL);
  glfwSetInputMode(_glwin, GLFW_STICKY_KEYS, GLFW_TRUE);
  glfwSetWindowAttrib(_glwin, GLFW_RESIZABLE, GLFW_FALSE);
}

GLWindow::~GLWindow() { glfwDestroyWindow(_glwin); }

void GLWindow::close() { glfwSetWindowShouldClose(_glwin, GLFW_TRUE); }

void GLWindow::show() { glfwShowWindow(_glwin); }

void GLWindow::hide() { glfwShowWindow(_glwin); }

Window::Size GLWindow::getWidth() { return _width; }

Window::Size GLWindow::getHeight() { return _height; }
