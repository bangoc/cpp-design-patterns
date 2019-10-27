#ifndef ENTRY_H_
#define ENTRY_H_

#include "account.h"
#include "transaction.h"

#include <vector>

class Entry {
 private:
  int amount_ = 0;
  Account* account_;
  Transaction* transaction_;
 public:
  Entry(int amount,
        Account* account,
        Transaction* transaction);
  int amount() const;
};

#endif  // ENTRY_H_