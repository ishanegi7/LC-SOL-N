# Combination Sum II

## Problem

Given a collection of candidate numbers `candidates` and a target number `target`, find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidates` may be used **at most once** in a combination.

The solution set must not contain duplicate combinations.

## Examples

### Example 1

**Input:**

candidates = [10,1,2,7,6,1,5]
target = 8

Output:
```
[
  [1,1,6],
  [1,2,5],
  [1,7],
  [2,6]
]
```
Example 2

Input:

candidates = [2,5,2,1,2]
target = 5

Output:
```
[
  [1,2,2],
  [5]
]
```


Constraints
```
1 <= candidates.length <= 100

1 <= candidates[i] <= 50

1 <= target <= 30

```
Notes

Each element in candidates can be used only once.

Duplicate candidate values may exist in the input.

Duplicate combinations must not appear in the output.

The order of numbers within a combination does not matter.


Complexity

Let N be the number of candidates.
```
Time Complexity: Depends on the number of possible combinations explored; in the worst case it can be exponential.

Space Complexity: O(N) for the recursion stack and current combination, excluding the space required for the output.
```
Related Concepts

Backtracking

Recursion

Sorting

Arrays

Duplicate Handling

LeetCode
Combination Sum II
