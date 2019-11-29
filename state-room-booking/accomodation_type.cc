#include "accomodation_type.h"

#include <sstream>

AccomodationType::AccomodationType(
      int type_id,
      int fee,
      const std::string& description)
        : type_id_{type_id}, fee_{fee}, description_{description} {
}

std::string AccomodationType::ToString() const {
  std::stringstream ss;
  ss << "Accomodation: id " << type_id_
     << " fee " << fee_
     << " description " << description_;
  return ss.str();
}