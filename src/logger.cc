#include <tengine/logger.hh>

using namespace tengine;

void Logger::log(std::string msg) { stderr << "[LOG] " << msg << std::endl; }
void Logger::dbg(std::string msg) { stderr << "[DEBUG] " << msg << std::endl; }
void Logger::err(std::string msg) { stderr << "[ERROR] " << msg << std::endl; }
