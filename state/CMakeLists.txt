cmake_minimum_required(VERSION 3.0)
project(GumballsMachine)
add_executable(machine gumballs_machine_main.cc gumballs_machine.cc
                state.cc no_coin_state.cc has_coin_state.cc)