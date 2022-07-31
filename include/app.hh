#include <memory>
#include <string_view>

#include "window.hh"

namespace tengine {
class _GLFW;

class App {
 public:
  static constexpr std::string_view DefaultTitle{"tengine app"};
  static std::unique_ptr<App> New(
      int winWidth = tengine::Window::DefaultWidth,
      int winHeight = tengine::Window::DefaultHeight,
      std::string_view title = App::DefaultTitle);

 private:
  std::unique_ptr<_GLFW> _glfw;
  std::unique_ptr<tengine::Window> _win;

 public:
  App(int winWidth, int winHeight, std::string_view title);
  ~App();
};

class _GLFW {
 public:
  _GLFW();
  ~_GLFW();
};

}  // namespace tengine
