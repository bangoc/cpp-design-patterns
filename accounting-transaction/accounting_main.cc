#include <iostream>
#include "account.h"
#include "entry.h"
#include "transaction.h"

int main() {
  Account supplier;
  Account pending;
  Account stock;
  Account sold;
  Account delivered;
  Transaction order{50, &supplier, &pending};
  Transaction arrival{40, &pending, &stock};
  Transaction sale{25, &stock, &sold};
  Transaction delivery{25, &sold, &delivered};

  std::cout << "Number of Books pending: " << pending.balance() << std::endl;
  std::cout << "Number of Books in stock: " << stock.balance() << std::endl;
  std::cout << "Number of Books sold: " << sold.balance() << std::endl;
  std::cout << "Number of Books delivered: " << delivered.balance() << std::endl;
  return 0;
}