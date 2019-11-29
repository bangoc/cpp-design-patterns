#ifndef HOSTING_H_
#define HOSTING_H_

#include "auto_id.h"

class Guest;
class HostingState;

class Hosting {
 private:
  int count_people_;
  const Guest* guest_;
  const HostingState* state_;
 public:
  Hosting(int count_people, Guest* guest);
  int count_people() const { return count_people_; }
  void SetState(HostingState* state);
  const HostingState* state() const { return state_; }
  DEFINE_AUTO_ID(Hosting);
};

#endif  // HOSTING_H_