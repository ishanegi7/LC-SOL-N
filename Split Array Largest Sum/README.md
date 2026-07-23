# 410. Split Array Largest Sum

**Difficulty:** Hard

## Problem Statement

Given an integer array `nums` and an integer `k`, split `nums` into `k` non-empty contiguous subarrays such that the largest sum among these subarrays is minimized.

Return the minimized largest subarray sum.

### Example 1

**Input:**
```text
nums = [7,2,5,10,8], k = 2
```

**Output:**
```text
18
```

### Example 2

**Input:**
```text
nums = [1,2,3,4,5], k = 2
```

**Output:**
```text
9
```

## Constraints

- `1 <= nums.length <= 1000`
- `0 <= nums[i] <= 10^6`
- `1 <= k <= min(50, nums.length)`
