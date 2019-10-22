#include "state.h"

#include <iostream>

#include "gumballs_machine.h"

State::State(GumballsMachine* machine)
    : model_{machine} {}

void State::TryDispenseOneGumball() {
  if (model_->gumballs_count_ >= 1) {
    std::cout << "Receive one gumball!" << std::endl;
    --model_->gumballs_count_;
  } else {
    std::cout << "Sorry, no gumball! See you again!" << std::endl;
  }
}

void State::SetNoCoinState() {
  model_->state_ = &(model_->no_coin_);
}

void State::SetHasCoinState() {
  model_->state_ = &(model_->has_coin_);
}