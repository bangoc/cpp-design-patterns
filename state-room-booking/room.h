#ifndef ROOM_H_
#define ROOM_H_

class AccomodationType;

#include <string>

class CurrentLodgingState;

class Room {
 private:
  int number_;
  const AccomodationType* type_;
  CurrentLodgingState* state_;
 public:
  Room(int number, AccomodationType* type);
  int number() const { return number_; }
  std::string ToString() const;
  CurrentLodgingState* state() { return state_; }
  CurrentLodgingState* SetLodgingState(CurrentLodgingState* state);
  bool IsBusy() const;
};

#endif  // ROOM_H_