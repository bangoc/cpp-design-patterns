#ifndef TRANSACTION_H_
#define TRANSACTION_H_

class Entry;
class Account;

class Transaction {
 private:
  Entry* first_;
  Entry* second_;
 public:
  Transaction(int amount,
              Account* from,
              Account* to);
  ~Transaction();
};

#endif  // TRANSACTION_H_