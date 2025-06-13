#include <iostream>
#include <memory>
#include <algorithm>

#include "interval_scheduler.hpp"

std::ostream& operator<<(std::ostream& os, const Interval& interval) {
  os << interval.m_start << "," << interval.m_end;
  return os;
}

int main() {

  Interval i_1{1, 4};
  Interval i_2{2, 5};
  Interval i_3{7, 9};
  Interval i_4{5, 6};
  Interval i_5{3, 8};

  std::vector<Interval> intervals{i_1, i_2, i_3, i_4, i_5};

  for (auto& interval : intervals) {
    std::cout << interval << std::endl;
  }
  std::cout << std::endl;

  auto scheduler = std::make_unique<IntervalScheduler>();
  scheduler->sort(intervals);

  for (auto& interval : intervals) {
    std::cout << interval << std::endl;
  }

  // okay the sort works now all we got to do is go to gym and finish this tomorrow...took one hour
  // to get this this point

  return 0;
}

