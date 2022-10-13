#include <iostream>

class Time {
public:
  Time(int hour, int minute, bool isAm)
      : hour_(hour), minute_(minute), isAm_(isAm) {}
  Time() : Time(0, 0, true) {}

  int Hour() const { return hour_; }
  void SetHour(int hour) { hour_ = hour; }

  int Minute() const { return minute_; }
  void SetMinute(int minute) { minute_ = minute; }

  bool IsAm() const { return isAm_; }
  void SetIsAm(bool isAm) { isAm_ = isAm; }

  std::string ToString() const;

private:
  int hour_;
  int minute_;
  bool isAm_;
};