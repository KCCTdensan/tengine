#include <GLFW/glfw3.h>

#include <string>

namespace tengine {

class Window {
 public:
  using Size = int;

  static constexpr int defaultWidth{800};
  static constexpr int defaultHeight{600};

  virtual ~Window() = default;

  virtual void close() = 0;
  virtual void show() = 0;
  virtual void hide() = 0;
  virtual Size getWidth() = 0;
  virtual Size getHeight() = 0;
};

class GLWindow : public Window {
 private:
  Window::Size _width, _height;
  std::string _title;
  GLFWwindow* _glwin;

 public:
  GLWindow(Window::Size width, Window::Size height, std::string_view title);
  ~GLWindow();

  void close() override;
  void show() override;
  void hide() override;
  Window::Size getWidth() override;
  Window::Size getHeight() override;
};

}  // namespace tengine
