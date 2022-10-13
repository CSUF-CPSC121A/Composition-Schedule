#include <iostream>
#include "schedule.h"

int main() {
  // TODO: Follow instructions in README.md
  
  Schedule sched("Monday", 
                 Time(10, 30, true), 
                 Time(11, 30, true));
  
  std::cout << sched.ToString() << "\n";
  return 0;
}