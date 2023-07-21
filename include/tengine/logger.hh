#pragma once

#include <iostream>
#include <string>
#include <tengine/vec2.hh>
#include <tengine/vec3.hh>

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
  void log(Vec2 vec);
  void log(Vec3 vec);
  void err(std::string msg);
  void dbg(std::string msg);
};

}
