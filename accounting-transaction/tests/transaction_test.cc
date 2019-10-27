#define CATCH_CONFIG_MAIN
#include "gtest/gtest.h"
#include "../transaction.h"
#include "../account.h"

TEST(TransactionTest, constructor) {
  Account acc1, acc2;
  Transaction t{99, &acc1, &acc2};
  EXPECT_EQ(acc1.balance(), -99);
  EXPECT_EQ(acc2.balance(), 99);
}