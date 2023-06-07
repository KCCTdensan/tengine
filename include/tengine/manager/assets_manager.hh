#pragma once

#include <string>
#include <tengine/core/asset.hh>
#include <tengine/core/logger.hh>

namespace tengine {

class AssetsManager {
  Logger& logger = Logger::get();

 public:
  AssetsManager() = default;
  ~AssetsManager() = default;

  Asset load(std::string path);
};

}
