#include <memory>
#include <string>
#include <tengine/window.hh>
#include <unordered_map>
#include <vector>

namespace tengine {
class GLApp;

struct AppWin {
  using Id = long long;
  Id id;
  std::shared_ptr<tengine::Window> win;
};

class App {
 public:
  // デフォではGL
  using DefaultApp = GLApp;

  static inline constexpr std::string_view defaultTitle{"tengine app"};

  static std::unique_ptr<App> New(
      tengine::Window::Size winWidth = tengine::Window::defaultWidth,
      tengine::Window::Size winHeight = tengine::Window::defaultHeight,
      std::string_view title = defaultTitle);

 public:
  virtual ~App() = default;

  virtual AppWin createWindow(int winWidth, int winHeight,
                              std::string_view title) = 0;
  virtual AppWin appendWindow(std::shared_ptr<Window> win) = 0;
  virtual AppWin getWindow(AppWin::Id id) = 0;
  virtual std::vector<AppWin> listWindow() = 0;
  virtual AppWin::Id destroyWindow(AppWin::Id id) = 0;
  // virtual void setMainWin(AppWin::id id) = 0;
};

class GLApp : public App {
  std::unordered_map<AppWin::Id, std::shared_ptr<tengine::Window>> _winMap;

 public:
  GLApp();
  GLApp(int winWidth, int winHeight, std::string_view title);
  ~GLApp();

  AppWin appendWindow(std::shared_ptr<tengine::Window> win) override;
  AppWin createWindow(int winWidth, int winHeight, std::string_view) override;
  AppWin getWindow(AppWin::Id) override;
  AppWin::Id destroyWindow(AppWin::Id id) override;
  std::vector<AppWin> listWindow() override;
};

}  // namespace tengine
