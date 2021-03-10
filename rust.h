#pragma once

// numeric types
#include <cstdint>
typedef int8_t i8;
typedef uint8_t u8;
typedef int16_t i16;
typedef uint16_t u16;
typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;
// todo: add f32 and f64
// but in a manner such that they're only defined if
// the compiler actually has IEEE754 float support.

// keywords
#define let auto const
#define self (*this)
#define fn auto
