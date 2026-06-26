# Majority Element

## Problem Statement

Given an integer array `nums` of size `n`, return the **majority element**.

The majority element is the element that appears **more than ⌊n / 2⌋ times**. You may assume that the majority element always exists in the array.

## Examples

### Example 1
**Input:**
```text
nums = [3,2,3]
```

**Output:**
```text
3
```

### Example 2
**Input:**
```text
nums = [2,2,1,1,1,2,2]
```

**Output:**
```text
2
```

## Constraints

- `n == nums.length`
- `1 <= n <= 5 × 10^4`
- `-10^9 <= nums[i] <= 10^9`
- The input is generated such that a majority element always exists.

## Follow-up

Can you solve the problem in **O(n)** time and **O(1)** extra space?
