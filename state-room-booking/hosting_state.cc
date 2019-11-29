#include "hosting_state.h"

#include "hosting.h"

HostingState::HostingState(Hosting* hosting)
    : hosting_{hosting} {
  hosting->SetState(this);
}