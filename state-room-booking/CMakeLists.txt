cmake_minimum_required(VERSION 3.2)

include("../cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.214.tar.gz"
    SHA1 "e14bc153a7f16d6a5eeec845fb0283c8fad8c358"
)

project(state-room-booking)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(hosting
      hosting_main.cc
      guest.cc
      hosting.cc
      hosting_state.cc
      hotel_bundle.cc
      accomodation_type.cc
      current_lodging_state.cc
      finished_lodging_state.cc
      reservation_state.cc
      room.cc)