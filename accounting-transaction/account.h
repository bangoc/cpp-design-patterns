#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include "entry.h"

#include <vector>

class Entry;

class Account {
 private:
  std::vector<Entry*> entries_;
 public:
  void AddEntry(Entry* entry);
  int balance() const;
};

#endif  // ACCOUNT_H_