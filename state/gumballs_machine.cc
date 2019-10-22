#include "gumballs_machine.h"
#include <iostream>

GumballsMachine::GumballsMachine()
    : no_coin_{this}, has_coin_{this}, state_{&no_coin_} {

}

void GumballsMachine::TurnCrank() {
  std::cout << "Turn crank command: ";
  state_->TurnCrank();
}

void GumballsMachine::InsertCoin() {
  std::cout << "Insert quarter command: ";
  state_->InsertCoin();
}

void GumballsMachine::EjectCoin() {
  std::cout << "Eject quarter command: ";
  state_->EjectCoin();
}