# 56. Merge Intervals

**Difficulty:** Medium

## Problem Statement

Given an array of intervals where:
ntervals[i] = [starti, endi]

merge all overlapping intervals and return an array of the non-overlapping intervals that cover all the intervals in the input.

Two intervals overlap if they share any common points. Intervals that touch at the boundary are also considered overlapping.

## Examples

### Example 1

**Input:** intervals = [[1,3],[2,6],[8,10],[15,18]]

**Output:** [[1,6],[8,10],[15,18]]
**Explanation:**
Intervals `[1,3]` and `[2,6]` overlap, so they are merged into `[1,6]`.

---
## Constraints

- `1 <= intervals.length <= 10^4`
- `intervals[i].length == 2`
- `0 <= starti <= endi <= 10^4`

## Topics

- Array
- Sorting
- Greedy
- Intervals

## Notes

The goal is to combine all overlapping ranges into a minimal set of intervals while preserving complete coverage of the original intervals.
