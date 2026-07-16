# Subarray Sum Equals K

## Problem
Given an integer array `nums` and an integer `k`, return the total number of **contiguous, non-empty subarrays** whose sum is exactly `k`.

A **subarray** is a contiguous sequence of elements within an array.

---

## Examples

### Example 1
**Input**
```text
nums = [1,1,1]
k = 2
```

**Output**
```text
2
```

### Example 2
**Input**
```text
nums = [1,2,3]
k = 3
```

**Output**
```text
2
```

---

## Constraints

- `1 <= nums.length <= 2 × 10⁴`
- `-1000 <= nums[i] <= 1000`
- `-10⁷ <= k <= 10⁷`

---

## Approach

Think about how to efficiently determine the sum of every possible contiguous subarray without recalculating sums repeatedly.

A brute-force approach checks every subarray, but there are more efficient techniques that make use of cumulative information while traversing the array.

---

## Edge Cases to Consider

- Array containing negative numbers
- `k` is negative or zero
- Multiple overlapping valid subarrays
- Entire array forms the required sum
- No valid subarray exists
- Single-element subarrays

---

## Complexity Goal

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Tags

- Array
- Hash Table
- Prefix Sum

---
