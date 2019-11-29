#include "hotel_bundle.h"

#include <iostream>

void HotelBundle::CreateRoom(int number, AccomodationType* type) {
  Room* room = new Room{number, type};
  all_room_[room->number()] = room;
}

AccomodationType* HotelBundle::CreateAccomodationType(
        int type_id,
        int fee, const std::string& description) {
  AccomodationType* accomodation
      = new AccomodationType{type_id, fee, description};
  all_accomodation_[accomodation->type_id()] = accomodation;
  return accomodation;
}

HotelBundle::HotelBundle() {
  CreateAccomodationType(1, 500000, "Phong mot nguoi");
  CreateAccomodationType(2, 1000000, "Phong hai nguoi");
  if (GetAccomodationType(1)) {
    auto accomodation = GetAccomodationType(1);
    CreateRoom(11, accomodation);
    CreateRoom(12, accomodation);
    CreateRoom(13, accomodation);
  }
  if (GetAccomodationType(2)) {
    auto accomodation = GetAccomodationType(2);
    CreateRoom(21, accomodation);
    CreateRoom(22, accomodation);
    CreateRoom(23, accomodation);
  }
}

HotelBundle::~HotelBundle() {
  for (auto& it: all_guest_) {
    delete it.second;
  }
  for (auto& it: all_accomodation_) {
    delete it.second;
  }
  for (auto& it: all_reservation_) {
    delete it.second;
  }
  for (auto& it: all_lodging_) {
    delete it.second;
  }
  for (auto& it: all_finished_lodging_) {
    delete it.second;
  }
  for (auto& it: all_hosting_) {
    delete it.second;
  }
  for (auto& it: all_room_) {
    delete it.second;
  }
}

Guest* HotelBundle::CreateGuest(const std::string& name) {
  Guest* guest = new Guest(name);
  all_guest_[guest->GetID()] = guest;
  return guest;
}

ReservationState* HotelBundle::CreateReservation(
        int estimated_arrival,
        int estimated_leave,
        AccomodationType* accomodation,
        Hosting* hosting) {
  ReservationState* reservation = new ReservationState(
    estimated_arrival, estimated_leave, accomodation, hosting);
  all_reservation_[reservation->GetID()] = reservation;
  return reservation;
}

ReservationState* HotelBundle::MakeReservation(
        Guest* guest,
        int estimated_arrival,
        int estimated_leave,
        int count_people,
        AccomodationType* accomodation) {
  Hosting* hosting = new Hosting(count_people, guest);
  ReservationState* reservation
    = CreateReservation(estimated_arrival,
                        estimated_leave,
                        accomodation,
                        hosting);
  all_hosting_[hosting->GetID()] = hosting;
  return reservation;
}

CurrentLodgingState* HotelBundle::DoCheckin(int check_in,
                 Room* room,
                 ReservationState* reservation) {
  CurrentLodgingState* lodging
    = new CurrentLodgingState{check_in,
                              reservation->estimated_leave(),
                              reservation};
  lodging->SetRoom(room);
  all_lodging_[lodging->GetID()] = lodging;
  return lodging;
}

FinishedLodgingState* HotelBundle::DoCheckout(
    int check_out, CurrentLodgingState* lodging) {
  FinishedLodgingState* finished_state
    = new FinishedLodgingState{check_out, lodging};
  all_finished_lodging_[finished_state->GetID()] = finished_state;
  return finished_state;
}

AccomodationType* HotelBundle::GetAccomodationType(int id) {
  auto type = all_accomodation_.find(id);
  if (type != all_accomodation_.end()) {
    return type->second;
  }
  return nullptr;
}

Room* HotelBundle::GetRoom(int id) {
  auto room = all_room_.find(id);
  if (room != all_room_.end()) {
    return room->second;
  }
  return nullptr;
}

void HotelBundle::DisplayRooms() {
  for (auto& it: all_room_) {
    std::cout << it.second->ToString() << std::endl;
  }
}