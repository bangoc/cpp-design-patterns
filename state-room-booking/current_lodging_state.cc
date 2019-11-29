#include "current_lodging_state.h"

#include "reservation_state.h"
#include "room.h"

CurrentLodgingState::CurrentLodgingState(
      int check_in, int estimated_leave,
      ReservationState* reservation)
    : HostingState{reservation->hosting()},
      check_in_{check_in}, estimated_leave_{estimated_leave} {
}

Room* CurrentLodgingState::SetRoom(Room* room) {
  room_ = room;
  room_->SetLodgingState(this);
  return room;
}