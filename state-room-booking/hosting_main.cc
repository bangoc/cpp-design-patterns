#include <iostream>

#include "hotel_bundle.h"

int main() {
  HotelBundle service;
  std::cout << "Start" << std::endl;
  service.DisplayRooms();

  Guest* bangoc = service.CreateGuest("Ba Ngoc");
  ReservationState* reservation =
      service.MakeReservation(bangoc, 10, 15, 1,
                              service.GetAccomodationType(1));

  std::cout << "After reservation: " << std::endl;
  service.DisplayRooms();

  CurrentLodgingState* lodging =
      service.DoCheckin(12, service.GetRoom(11), reservation);
  std::cout << "After checkin: " << std::endl;
  service.DisplayRooms();

  FinishedLodgingState* finished_lodging =
      service.DoCheckout(15, lodging);
  std::cout << "After checkout: " << std::endl;
  service.DisplayRooms();

  return 0;
}