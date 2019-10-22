#ifndef HAS_COIN_STATE_H_
#define HAS_COIN_STATE_H_

#include "state.h"

class HasCoinState: public State {
 public:
  HasCoinState(GumballsMachine* machine);
  void TurnCrank() override;
  void InsertCoin() override;
  void EjectCoin() override;
};

#endif  // HAS_COIN_STATE_H_