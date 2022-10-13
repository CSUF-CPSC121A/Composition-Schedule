#include <iostream>
#include "time.h"

std::string Time::ToString() const {
  std::string minute_string = "";
  std::string am_pm = "pm";
      
  if (minute_ < 10) {
    minute_string = "0";
  }
  minute_string += std::to_string(minute_);
 
  if (isAm_) {
    am_pm = "am";
  }
  return std::to_string(hour_) + ":" + minute_string + " " + am_pm;
}