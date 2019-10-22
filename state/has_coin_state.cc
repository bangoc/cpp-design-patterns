#include "has_coin_state.h"

#include <iostream>

HasCoinState::HasCoinState(GumballsMachine* machine): State{machine} {
}

void HasCoinState::TurnCrank() {
  TryDispenseOneGumball();
}

void HasCoinState::InsertCoin() {
  std::cout << "Already has a coin" <<std::endl;
}

void HasCoinState::EjectCoin() {
  std::cout << "Receive a quarter." << std::endl;
  SetNoCoinState();
}