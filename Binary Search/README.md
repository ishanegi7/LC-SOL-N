# Binary Search

## Problem Statement

Given a sorted array of unique integers `nums` (sorted in ascending order) and an integer `target`, determine whether the target exists in the array.

- Return the index of the target if it is present.
- Otherwise, return `-1`.

Your solution must have a time complexity of **O(log n)**.

---

## Examples

### Example 1

**Input**
```text
nums = [-1,0,3,5,9,12]
target = 9
```

**Output**
```text
4
```

**Explanation**

The target value `9` is present in the array at index `4`.

---

### Example 2

**Input**
```text
nums = [-1,0,3,5,9,12]
target = 2
```

**Output**
```text
-1
```

**Explanation**

The target value `2` is not present in the array.

---

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 < nums[i], target < 10^4`
- All elements in `nums` are **unique**.
- `nums` is sorted in **ascending order**.

---

## Approach

Since the array is already sorted, a linear search would not satisfy the required time complexity.

The goal is to design an algorithm that efficiently narrows down the search space and finds the target in **O(log n)** time.

---

## Complexity Requirements

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Tags

- Binary Search
- Searching
- Divide and Conquer

