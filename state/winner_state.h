#ifndef WINNER_STATE_H_
#define WINNER_STATE_H_

#include "has_coin_state.h"

class WinnerState: public HasCoinState {
 public:
  WinnerState(GumballsMachine* machine);
  void TurnCrank() override;
};


#endif  // WINNER_STATE_H_e