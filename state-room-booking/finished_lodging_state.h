#ifndef FINISHED_LODGING_STATE_H_
#define FINISHED_LODGING_STATE_H_

#include "auto_id.h"
#include "hosting_state.h"

class Room;
class CurrentLodgingState;

class FinishedLodgingState: public HostingState {
 private:
  int check_in_;
  int check_out_;
  Room* room_;
 public:
  FinishedLodgingState(
      int check_out,
      CurrentLodgingState* lodging_state);
  DEFINE_AUTO_ID(FinishedLodgingState);
};

#endif  // FINISHED_LODGING_STATE_H_