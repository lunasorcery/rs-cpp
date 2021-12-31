#pragma once

// numeric types
#include <cstdint>
using i8  = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;
using u8  = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
// todo: add f32 and f64
// but in a manner such that they're only defined if
// the compiler actually has IEEE754 float support.

// keywords
#define let auto const
#define self (*this)
#define fn auto
