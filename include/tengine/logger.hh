#pragma once

#include <iostream>
#include <string>

namespace tengine {

class Logger {
 public:
  static Logger& get() {
    static Logger logger;
    return logger;
  }

  Logger() = default;
  ~Logger() = default;

  std::ostream& stdout = std::cout;
  std::ostream& stderr = std::cerr;

  void log(std::string msg);
  void err(std::string msg);
  void dbg(std::string msg);
};

}
