#include <fstream>
#include <string>

namespace tengine {

class Logger {
  std::ofstream _ofs;

 public:
  Logger(std::string file);
  ~Logger();
  void log(std::string msg);
};

}  // namespace tengine
