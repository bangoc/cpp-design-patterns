cmake_minimum_required(VERSION 3.2)

include("../cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.214.tar.gz"
    SHA1 "e14bc153a7f16d6a5eeec845fb0283c8fad8c358"
)

project(accounting)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(accouting
              accounting_main.cc
              account.cc
              entry.cc
              transaction.cc)

add_subdirectory(tests)

