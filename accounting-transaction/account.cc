#include "account.h"
#include "entry.h"

void Account::AddEntry(Entry* entry) {
  entries_.push_back(entry);
}

int Account::balance() const {
  int sum = 0;
  for (Entry* entry: entries_) {
    sum += entry->amount();
  }
  return sum;
}