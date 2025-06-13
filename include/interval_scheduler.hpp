#include <vector>
#include "interval.hpp"

class IntervalScheduler {

public:
  IntervalScheduler() {}

  std::vector<Interval> nonOverlappingMaximalIntervals(const std::vector<Interval>& input) {

    std::vector<Interval> inputCopy = input;
    sort(inputCopy);

    int currentStart = inputCopy.back().m_start;
    int currentEnd = inputCopy.back().m_end;
    return inputCopy;
  }

  void sort(std::vector<Interval>& input) {

    std::sort(input.begin(), input.end(),
              [](const Interval& a, const Interval& b) { return a.m_start < b.m_start; });
  }

private:
};
