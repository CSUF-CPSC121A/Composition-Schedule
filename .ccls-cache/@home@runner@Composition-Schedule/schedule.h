#include <iostream>
#include "time.h"

class Schedule {
 public:
  Schedule()
      : Schedule("Monday", Time(8, 0, true), Time(9, 0, true)) { }
  Schedule(const std::string day, const Time &start_time,
           const Time& end_time)
      : day_(day), start_time_(start_time), end_time_(end_time) { }

  const std::string Day() const { return day_; }
  void SetDay(const std::string &day) { day_ = day; }

  const Time& StartTime() { return start_time_; }
  void SetStartTime(const Time &start_time) { 
    start_time_ = start_time;
  }

  const Time& EndTime() { return end_time_; }
  void SetEndTime(const Time &end_time) { 
    end_time_ = end_time;
  }

  std::string ToString() const {
    return day_ + " " + start_time_.ToString() +
           " - " + end_time_.ToString();
  }
 private:
  std::string day_;
  Time start_time_;
  Time end_time_;
};