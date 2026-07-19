# 81. Search in Rotated Sorted Array II

## Problem Statement

There is an integer array `nums` sorted in **non-decreasing order** (duplicates are allowed).

Before being passed to your function, the array is rotated at an unknown pivot index `k` (`0 <= k < nums.length`) so that the resulting array becomes:

```
[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]
```

Given the rotated array `nums` and an integer `target`, determine whether `target` exists in the array.

Return:

- `true` if the target is present.
- `false` otherwise.

The solution should minimize the number of operations as much as possible.

---

## Examples

### Example 1

**Input**

```text
nums = [2,5,6,0,0,1,2]
target = 0
```

**Output**

```text
true
```

---

### Example 2

**Input**

```text
nums = [2,5,6,0,0,1,2]
target = 3
```

**Output**

```text
false
```

---

## Constraints

- `1 <= nums.length <= 5000`
- `-10^4 <= nums[i] <= 10^4`
- `nums` is sorted in non-decreasing order before rotation.
- The array may contain duplicate elements.
- `nums` is rotated at some pivot index.
- `-10^4 <= target <= 10^4`

---

## Key Observations

- The original array is sorted before rotation.
- Rotation divides the array into two sorted parts.
- Duplicate values make it more difficult to determine which half is sorted.
- The objective is to efficiently determine whether the target exists in the array.

---

## Edge Cases

- Array contains only one element.
- Target is the first element.
- Target is the last element.
- Target does not exist.
- Array contains all identical elements.
- Array is not effectively rotated (`k = 0`).
- Duplicate values appear around the rotation point.

---

## Expected Complexity

- **Time Complexity:** Ideally better than linear search. However, due to duplicates, the worst-case complexity may degrade to **O(n)**.
- **Space Complexity:** **O(1)**.

---

## Tags

- Array
- Binary Search

---

## Difficulty

**Medium**
