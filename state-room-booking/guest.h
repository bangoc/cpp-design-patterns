#ifndef GUEST_H_
#define GUEST_H_

#include "auto_id.h"

#include <string>

class Guest {
 private:
  std::string name_;
 public:
  Guest(const std::string& name);
  const std::string& name() const { return name_; }
  DEFINE_AUTO_ID(Guest);
};

#endif  // GUEST_H_