// Copyright 2021 Marzuk Rashid

#ifndef SRC_POKER_ENGINE_TYPES_H_
#define SRC_POKER_ENGINE_TYPES_H_

#include <cstdint>

namespace poker_engine {

using RoundId = uint8_t;
using PlayerId = uint8_t;
using Chips = uint32_t;

enum class Round : RoundId { kPreFlop, kFlop, kTurn, kRiver };
enum class Action : uint8_t { kFold, kCheckCall, kBet, kAllIn };

constexpr RoundId kNRounds = 4;

}  // namespace poker_engine

#endif  // SRC_POKER_ENGINE_TYPES_H_
