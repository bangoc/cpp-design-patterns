#include "room.h"

#include "accomodation_type.h"

#include <sstream>

Room::Room(int number, AccomodationType* type)
        : number_{number}, type_{type} {
}

std::string Room::ToString() const {
  std::stringstream ss;
  if (IsBusy()) {
    ss << "BUSY ";
  } else {
    ss << "FREE ";
  }
  ss << "Room: number " << number_ << " " << type_->ToString();
  return ss.str();
}

CurrentLodgingState* Room::SetLodgingState(
      CurrentLodgingState* state) {
  state_ = state;
  return state_;
}

bool Room::IsBusy() const {
  return state_ != nullptr;
}