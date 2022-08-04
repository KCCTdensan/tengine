#include <tengine/logger.hh>

using namespace std::literals;
using namespace tengine;

Logger::Logger(std::string file) { _ofs = std::ofstream{file, std::ios::app}; }

Logger::~Logger() {}

void Logger::log(std::string msg) { _ofs << "log: "s << msg << std::endl; }
