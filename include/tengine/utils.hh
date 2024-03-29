#pragma once

#include <cstdint>
#include <string>

#define QUOTE(s) #s

namespace tengine {

using namespace std::literals;

////////////////////////////////////////////////////////////////
//  Meta                                                      //
////////////////////////////////////////////////////////////////

#ifndef VERSION
#define VERSION undefined
#endif

inline constexpr const char* name = "tengine";
inline constexpr const char* version = QUOTE(VERSION);

////////////////////////////////////////////////////////////////
//  Types                                                     //
////////////////////////////////////////////////////////////////

using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

using f32 = float;
using f64 = double;

}
