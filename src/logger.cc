#include <tengine/logger.hh>

using namespace tengine;

void Logger::log(std::string msg) { stderr << "[LOG] " << msg << std::endl; }
void Logger::dbg(std::string msg) { stderr << "[DEBUG] " << msg << std::endl; }
void Logger::err(std::string msg) { stderr << "[ERROR] " << msg << std::endl; }

void Logger::log(Vec2 vec) {
  stderr << "[LOG] " << vec.x << " " << vec.y << std::endl;
}

void Logger::log(Vec3 vec) {
  stderr << "[LOG] " << vec.x << " " << vec.y << " " << vec.z << std::endl;
}