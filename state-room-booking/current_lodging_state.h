#ifndef CURRENT_LODGING_STATE_H_
#define CURRENT_LODGING_STATE_H_

#include "auto_id.h"
#include "hosting_state.h"

class Room;
class ReservationState;

class CurrentLodgingState: public HostingState {
 private:
  int check_in_;
  int estimated_leave_;
  Room* room_;
 public:
  CurrentLodgingState(int check_in,
                      int estimated_leave,
                      ReservationState* reservation);
  Room* SetRoom(Room* room);
  int check_in() const { return check_in_; }
  Room* room() { return room_; }
  int estimated_leave() const { return estimated_leave_; }
  DEFINE_AUTO_ID(CurrentLodgingState);
};

#endif  // CURRENT_LODGING_STATE_H_