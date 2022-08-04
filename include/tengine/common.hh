#include <exception>
#include <string_view>

namespace tengine {

static inline constexpr std::string_view name{"tengine"};
static inline constexpr std::string_view version{"0.0"};
// static inline constexpr std::string_view info =
//     std::format("{} v{}", name, version);

class TengineError : public std::exception {
 public:
  TengineError(std::string_view msg) {}
};

class TengineSystemError : public TengineError {
  using TengineError::TengineError;
};

}  // namespace tengine
