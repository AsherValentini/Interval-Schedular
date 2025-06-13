# Interval Scheduler

## Paragraph:

You are building a component for a scheduler.
You are given a list of time intervals. Each interval has:

    a start time (integer)

    an end time (integer), where end > start

Some intervals overlap.
You must implement a component that selects a maximal set of non-overlapping intervals.
In other words: choose as many intervals as possible such that no two intervals overlap.

## Example:

Input intervals:  
[1, 4], [2, 5], [7, 9], [5, 6], [3, 8]

Output:  
[1, 4], [5, 6], [7, 9] → maximal set of non-overlapping intervals

## Clarifications:

    You must model an Interval class — do not just use pairs of ints everywhere.

    You must implement an API like: std::vector<Interval> selectMaxNonOverlapping(const std::vector<Interval>& input)

    You must write the algorithm to select the correct set (hint: greedy approach is optimal here — think about which intervals to select first).

    You must produce input → output print.

## This is exactly the same flavor as the box problem:

    You model an object (Interval)

    You process a list of objects

    You apply an algorithm (greedy selection)

    You expose a clean API

    You print the result
