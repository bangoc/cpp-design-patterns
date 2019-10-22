#ifndef NO_COIN_STATE_H_
#define NO_COIN_STATE_H_

#include "state.h"

class NoCoinState: public State {
 public:
  NoCoinState(GumballsMachine* machine);
  void TurnCrank() override;
  void InsertCoin() override;
  void EjectCoin() override;
};

#endif  // NO_COIN_STATE_H_