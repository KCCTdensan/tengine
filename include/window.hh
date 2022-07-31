#include <GLFW/glfw3.h>

#include <string>

namespace tengine {

class Window {
 public:
  static constexpr int DefaultWidth{800};
  static constexpr int DefaultHeight{600};

 private:
  int _width, _height;
  std::string _title;
  GLFWwindow *_glwin;

 public:
  Window(int width, int height, std::string title);
  ~Window();
};

}  // namespace tengine
