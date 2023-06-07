#include <tengine/core/logger.hh>

using namespace tengine;

template <typename T, typename... U>
void(T t, U... u) {
  stderr << "[LOG] " << msg << std::endl;
}

template <typename... Args>
void Logger::log(Args... args) {
  stderr << "[LOG] " << msg << std::endl;
}

template <typename... Args>
void Logger::dbg(Args... args) {
  stderr << "[DEBUG] " << msg << std::endl;
}

template <typename... Args>
void Logger::err(Args... args) {
  stderr << "[ERROR] " << msg << std::endl;
}
