#include "logger.hh"

using namespace tengine;

Logger::Logger(std::string file) {
  this->_ofs = std::ofstream{file, std::ios::app};
}

Logger::~Logger() {}

void Logger::log(std::string msg) { this->_ofs << "log: " << msg << std::endl; }
