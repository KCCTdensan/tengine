#pragma once

#include <filesystem>

namespace tengine {

class Asset {
 public:
  virtual ~Asset() = default;
};

class ImageAsset {
 public:
  ImageAsset(std::filesystem::path _path);

  std::filesystem::path path;
};

}
