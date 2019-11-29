#ifndef AUTO_ID_H_
#define AUTO_ID_H_

#ifndef DEFINE_AUTO_ID
  #define DEFINE_AUTO_ID(tag) private: \
    AutoID<tag> id_; \
   public:\
    int GetID() const { return id_.value_; }
#endif  // DEFINE_AUTO_ID

template<typename tag>
struct AutoID{
  static int MAX_VALUE;
  int value_;
  AutoID() {
    value_ = MAX_VALUE;
    ++MAX_VALUE;
  }
};

// static
template<typename tag>
int AutoID<tag>::MAX_VALUE = 0;

#endif  // AUTO_ID_H_