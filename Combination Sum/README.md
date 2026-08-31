# 39. Combination Sum

## Problem

Given an array of distinct integers `candidates` and a target integer `target`, return a list of all unique combinations of candidates where the chosen numbers sum to `target`.

- The same number may be chosen **unlimited times**.
- Two combinations are unique if the frequency of at least one chosen number is different.
- The order of combinations does not matter.

### Example 1

**Input:**
```text
candidates = [2,3,6,7], target = 7
[[2,2,3],[7]]


Example 2
Input:

candidates = [2,3,5], target = 8

Output:

[[2,2,2,2],[2,3,3],[3,5]]

Example 3
Input:

candidates = [2], target = 1

Output:

[]
