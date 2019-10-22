#include "gumballs_machine.h"
#include <cstdlib>
#include <ctime>

int main() {
  GumballsMachine machine;
  std::srand(std::time(0));
  machine.TurnCrank();
  machine.InsertCoin();
  machine.EjectCoin();
  machine.TurnCrank();
  machine.InsertCoin();
  machine.TurnCrank();

  for (int i = 0; i < 20; ++i) {
    machine.InsertCoin();
    machine.TurnCrank();
  }
  return 0;
}