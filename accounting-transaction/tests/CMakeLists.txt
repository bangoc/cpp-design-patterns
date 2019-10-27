hunter_add_package(GTest)
find_package(GTest CONFIG REQUIRED)

add_executable(transaction_test transaction_test.cc ../transaction.cc ../account.cc ../entry.cc)
target_link_libraries(transaction_test PUBLIC GTest::main)