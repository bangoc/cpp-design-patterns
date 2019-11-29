#ifndef HOTEL_BUNDLE_H_
#define HOTEL_BUNDLE_H_

#include "accomodation_type.h"
#include "current_lodging_state.h"
#include "finished_lodging_state.h"
#include "guest.h"
#include "hosting.h"
#include "reservation_state.h"
#include "room.h"

#include <string>
#include <map>

class HotelBundle {
 private:
  std::map<int, Guest*> all_guest_;
  std::map<int, AccomodationType*> all_accomodation_;
  std::map<int, ReservationState*> all_reservation_;
  std::map<int, CurrentLodgingState*> all_lodging_;
  std::map<int, FinishedLodgingState*> all_finished_lodging_;
  std::map<int, Hosting*> all_hosting_;
  std::map<int, Room*> all_room_;
  void CreateRoom(int number, AccomodationType* type);
  AccomodationType* CreateAccomodationType(
        int type_id,
        int fee, const std::string& description);
  ReservationState* CreateReservation(
        int estimated_arrival,
        int estimated_leave,
        AccomodationType* accomodation,
        Hosting* hosting);
 public:
  HotelBundle();
  ~HotelBundle();
  Guest* CreateGuest(const std::string& name);
  ReservationState* MakeReservation(
        Guest* guest,
        int estimated_arrival,
        int estimated_leave,
        int count_people,
        AccomodationType* accomodation);
  CurrentLodgingState* DoCheckin(int check_in,
                     Room* room,
                     ReservationState* reservation);
  FinishedLodgingState* DoCheckout(int check_out,
                   CurrentLodgingState* lodging);
  AccomodationType* GetAccomodationType(int id);
  Room* GetRoom(int id);
  void DisplayRooms();

 private:
  HotelBundle(HotelBundle&) = delete;
};

#endif  // HOTEL_BUNDLE_H_