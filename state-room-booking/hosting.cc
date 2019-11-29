#include "hosting.h"

#include "guest.h"
#include "hosting_state.h"

Hosting::Hosting(int count_people, Guest* guest)
            : count_people_{count_people}, guest_{guest} {
}

void Hosting::SetState(HostingState* state) {
  state_ = state;
}