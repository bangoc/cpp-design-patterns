#ifndef HOSTING_STATE_H_
#define HOSTING_STATE_H_

#include "auto_id.h"

class Hosting;

class HostingState {
 private:
  Hosting* hosting_;
 public:
  enum class StateEnum {
    GENERIC,
    RESERVATION,
    CURRENT_LODGING,
    FINISHED_LODGING
  };
  virtual StateEnum GetStateName() const { return StateEnum::GENERIC; }
  Hosting* hosting() { return hosting_; }
  HostingState(Hosting* hosting);
 DEFINE_AUTO_ID(HostingState);
};

#endif  // HOSTING_STATE_H_