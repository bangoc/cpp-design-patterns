#ifndef STATE_H_
#define STATE_H_

class GumballsMachine;

class State {
 private:
  GumballsMachine* model_;
 protected:

  // Setup a single access point to machine's private states
  State(GumballsMachine* machine);
  void TryDispenseOneGumball();
  void SetNoCoinState();
  void SetHasCoinState();
  void SetWinnerState();
 public:
  virtual void TurnCrank() = 0;
  virtual void EjectCoin() = 0;
  virtual void InsertCoin() = 0;
};

#endif  // STATE_H_