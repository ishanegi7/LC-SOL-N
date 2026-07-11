# 2149. Rearrange Array Elements by Sign

## Problem Statement

You are given a **0-indexed integer array** `nums` of even length consisting of an equal number of positive and negative integers.

Rearrange the array such that:

- Every consecutive pair of integers has opposite signs.
- The relative order of positive integers is preserved.
- The relative order of negative integers is preserved.
- The rearranged array starts with a positive integer.

Return the rearranged array.

---

## Examples

### Example 1

**Input:**
```
nums = [3,1,-2,-5,2,-4]
```

**Output:**
```
[3,-2,1,-5,2,-4]
```

---

### Example 2

**Input:**
```
nums = [-1,1]
```

**Output:**
```
[1,-1]
```

---

## Constraints

- `2 <= nums.length <= 2 × 10^5`
- `nums.length` is even.
- `1 <= |nums[i]| <= 10^5`
- `nums` contains an equal number of positive and negative integers.

---

## Approaches

- Brute Force
- Better Approach
- Optimal Approach

---

## Complexity

| Approach | Time | Space |
|----------|------|-------|
| Brute Force | O(n²) | O(n) |
| Better | O(n) | O(n) |
| Optimal | O(n) | O(n) |

---
