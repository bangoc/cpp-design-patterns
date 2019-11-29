#ifndef RESERVATION_STATE_H_
#define RESERVATION_STATE_H_

#include "hosting_state.h"
#include "accomodation_type.h"

#include "auto_id.h"

class ReservationState: public HostingState {
 private:
  int estimated_arrival_;
  int estimated_leave_;
  const AccomodationType* accomodation_;
 public:
  int estimated_leave() const { return estimated_leave_; }
  StateEnum GetStateName() const override { return StateEnum::CURRENT_LODGING; }
  ReservationState(int estimated_arrival,
                   int estimated_leave,
                   const AccomodationType* accomodation,
                   Hosting* hosting);
  DEFINE_AUTO_ID(ReservationState);
};

#endif  // RESERVATION_STATE_H_