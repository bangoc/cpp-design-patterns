#ifndef GUMBALLS_MACHINE_H_
#define GUMBALLS_MACHINE_H_

#include "state.h"
#include "no_coin_state.h"
#include "has_coin_state.h"
#include "winner_state.h"

class GumballsMachine {
 private:
  NoCoinState no_coin_;
  HasCoinState has_coin_;
  WinnerState winner_;
  State* state_;
  int gumballs_count_ = 100;
  friend class State;
 public:
  GumballsMachine();
  void TurnCrank();
  void InsertCoin();
  void EjectCoin();
};

#endif  // GUMBALLS_MACHINE_H_