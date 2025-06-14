#include <vector>
#include "interval.hpp"

class IntervalScheduler {

public:
  IntervalScheduler() {}

  std::vector<Interval> nonOverlappingMaximalIntervals(const std::vector<Interval>& input) {

    // do not change the input, make a local copy
    std::vector<Interval> inputCopy = input;

    // sort the local copy according to end max criteria
    sort(inputCopy);

    // add the interval with the max end
    int currentStart = inputCopy.back().m_start;

    // add that interval to the results vector
    std::vector<Interval> results;
    results.push_back(inputCopy.back());

    // iterate
    for (int i = inputCopy.size() - 2; i >= 0; --i) {
      if (inputCopy[i].m_end < currentStart) {
        results.push_back(inputCopy[i]);
        currentStart = inputCopy[i].m_start;
      }
    }

    return results;
  }

  void sort(std::vector<Interval>& input) {

    std::sort(input.begin(), input.end(),
              [](const Interval& a, const Interval& b) { return a.m_end < b.m_end; });
  }

private:
};
