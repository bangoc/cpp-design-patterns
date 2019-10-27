#include "entry.h"

#include "account.h"
#include "transaction.h"

int Entry::amount() const {
  return amount_;
}

Entry::Entry(int amount,
        Account* account,
        Transaction* transaction)
    : amount_{amount},
      account_{account},
      transaction_{transaction} {
  account_->AddEntry(this);
}