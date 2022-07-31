#include "window.hh"

using namespace tengine;

Window::Window(int width, int height, std::string title)
    : _width{width}, _height{height}, _title{title} {
  this->_glwin = glfwCreateWindow(_width, _height, _title.c_str(), NULL, NULL);
}

Window::~Window() { glfwDestroyWindow(this->_glwin); }
