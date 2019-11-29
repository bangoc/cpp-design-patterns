#include "reservation_state.h"

ReservationState::ReservationState(
              int estimated_arrival,
              int estimated_leave,
              const AccomodationType* accomodation,
              Hosting* hosting)
    : HostingState{hosting},
      estimated_arrival_{estimated_arrival},
      estimated_leave_{estimated_leave},
      accomodation_{accomodation} {
}
