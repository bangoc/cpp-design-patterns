#include "no_coin_state.h"

#include <iostream>

NoCoinState::NoCoinState(GumballsMachine* machine) : State{machine} {
}

void NoCoinState::TurnCrank() {
  std::cout << "No coin! Plesase insert a quarter!" << std::endl;
}

void NoCoinState::InsertCoin() {
  std::cout << "A quarter inserted." << std::endl;
  SetHasCoinState();
}

void NoCoinState::EjectCoin() {
  std::cout << "Nothing to return! Please insert a coin!" << std::endl;
}