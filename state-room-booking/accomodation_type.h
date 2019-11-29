#ifndef ACCOMODATION_TYPE_H_
#define ACCOMODATION_TYPE_H_

#include "auto_id.h"

#include <string>

class AccomodationType {
 private:
  int type_id_;
  int fee_;
  std::string description_;
 public:
  int type_id() const { return type_id_; }
  int fee() const { return fee_; }
  const std::string& description() const { return description_; }
  AccomodationType(int type_id, int fee, const std::string& description);
  std::string ToString() const;
};

#endif  // ACCOMODATION_TYPE_H_