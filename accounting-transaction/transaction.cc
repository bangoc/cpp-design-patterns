#include "transaction.h"

#include "account.h"
#include "entry.h"

Transaction::Transaction(int amount,
              Account* from,
              Account* to) {
  first_ = new Entry(-amount, from, this);
  second_ = new Entry(amount, to, this);
}

Transaction::~Transaction() {
  delete first_;
  delete second_;
}