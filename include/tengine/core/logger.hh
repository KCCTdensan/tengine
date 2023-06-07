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

  template <typename... Args>
  void log(Args... args);

  template <typename... Args>
  void err(Args... args);

  template <typename... Args>
  void dbg(Args... args);
};

}
