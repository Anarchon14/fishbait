// Copyright 2021 Marzuk Rashid

#ifndef SRC_UTILS_PRINT_H_
#define SRC_UTILS_PRINT_H_

#include <array>

namespace fishbait {

template <typename T, std::size_t N>
inline std::ostream& Out(std::ostream& os, std::array<T, N>&& s) {
  os << "[";
  for (std::size_t i = 0; i < N; ++i) {
    os << s[i];
    if (i != N - 1) {
      os << ", ";
    }
  }
  os << "]";
  return os;
}

template <std::size_t N>
inline std::ostream& Out(std::ostream& os, std::array<uint8_t, N>&& s) {
  os << "[";
  for (std::size_t i = 0; i < N; ++i) {
    os << +s[i];
    if (i != N - 1) {
      os << ", ";
    }
  }
  os << "]";
  return os;
}

}  // namespace fishbait

#endif  // SRC_UTILS_PRINT_H_
