#include "gumballs_machine.h"

int main() {
  GumballsMachine machine;
  machine.TurnCrank();
  machine.InsertCoin();
  machine.EjectCoin();
  machine.TurnCrank();
  machine.InsertCoin();
  machine.TurnCrank();
  return 0;
}