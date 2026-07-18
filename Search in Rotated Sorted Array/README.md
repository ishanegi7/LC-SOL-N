# Search in Rotated Sorted Array

## Problem Statement

There is an integer array `nums` sorted in ascending order with **distinct** values.

Before being passed to your function, `nums` may have been **rotated** at an unknown index `k` (`1 <= k < nums.length`), resulting in:

```text
[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]
```

For example, the array:

```text
[0,1,2,4,5,6,7]
```

might be rotated by `3` positions to become:

```text
[4,5,6,7,0,1,2]
```

Given the rotated array `nums` and an integer `target`, return the **index** of `target` if it exists in the array. Otherwise, return `-1`.

Your algorithm must have a runtime complexity of **O(log n)**.

---

## Examples

### Example 1

**Input**
```text
nums = [4,5,6,7,0,1,2]
target = 0
```

**Output**
```text
4
```

---

### Example 2

**Input**
```text
nums = [4,5,6,7,0,1,2]
target = 3
```

**Output**
```text
-1
```

---

### Example 3

**Input**
```text
nums = [1]
target = 0
```

**Output**
```text
-1
```

---

## Constraints

- `1 <= nums.length <= 5000`
- `-10^4 <= nums[i] <= 10^4`
- All values in `nums` are **unique**.
- `nums` is sorted in ascending order and may be rotated.
- `-10^4 <= target <= 10^4`

---

## Function Signature

### C++

```cpp
int search(vector<int>& nums, int target);
```

---

## Notes

- The array is initially sorted in ascending order.
- It may be rotated at an unknown pivot.
- If the target exists, return its index.
- Otherwise, return `-1`.
- The expected time complexity is **O(log n)**.

---

## Tags

- Binary Search
- Array
- Searching
- Rotated Sorted Array
```
