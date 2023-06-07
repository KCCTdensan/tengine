#pragma once

#include <exception>

namespace tengine {

class BaseError : public std::exception {
 protected:
  std::string& msg;

 public:
  BaseError(std::string _msg) : msg{_msg} {};
};

class SystemError : public BaseError {
  using BaseError::BaseError;
};

}
