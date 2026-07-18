# Find First and Last Position of Element in Sorted Array

## Problem Statement

Given an integer array `nums` sorted in **non-decreasing order**, find the **starting** and **ending** positions of a given `target` value.

If the target is not present in the array, return `[-1, -1]`.

Your algorithm must have a runtime complexity of **O(log n)**.

---

## Examples

### Example 1

**Input**
```text
nums = [5,7,7,8,8,10]
target = 8
```

**Output**
```text
[3,4]
```

### Example 2

**Input**
```text
nums = [5,7,7,8,8,10]
target = 6
```

**Output**
```text
[-1,-1]
```

### Example 3

**Input**
```text
nums = []
target = 0
```

**Output**
```text
[-1,-1]
```

---

## Constraints

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `nums` is sorted in **non-decreasing** order.
- `-10^9 <= target <= 10^9`

---

## Function Signature

### C++

```cpp
vector<int> searchRange(vector<int>& nums, int target);
```

---

## Notes

- The returned array should contain:
  - The index of the **first occurrence** of `target`.
  - The index of the **last occurrence** of `target`.
- If the target does not exist, return `[-1, -1]`.
- Aim for an **O(log n)** solution.

---

## Tags

- Binary Search
- Arrays
- Searching
```
