#include "finished_lodging_state.h"

#include "current_lodging_state.h"
#include "room.h"

FinishedLodgingState::FinishedLodgingState(
      int check_out,
      CurrentLodgingState* lodging_state)
    : HostingState{lodging_state->hosting()} {
  check_in_ = lodging_state->check_in();
  check_out_ = check_out;
  room_ = lodging_state->room();
  room_->SetLodgingState(nullptr);
}