#include "winner_state.h"

#include <iostream>

WinnerState::WinnerState(GumballsMachine* machine): HasCoinState{machine} {
}

void WinnerState::TurnCrank() {
  std::cout << "Winner state!" << std::endl;
  for (int i = 0; i < 2; ++i) {
    TryDispenseOneGumball();
  }
  SetNoCoinState();
}