# Search Insert Position

## Problem Statement

Given a sorted array of **distinct integers** `nums` and an integer `target`, return the index of the target if it exists.

If the target is not present, return the index where it should be inserted so that the array remains sorted.

Your solution must have a time complexity of **O(log n)**.

---

## Examples

### Example 1

**Input**
```text
nums = [1,3,5,6]
target = 5
```

**Output**
```text
2
```

**Explanation**

The target `5` already exists in the array at index `2`.

---

### Example 2

**Input**
```text
nums = [1,3,5,6]
target = 2
```

**Output**
```text
1
```

**Explanation**

The target `2` is not present. It should be inserted at index `1` to maintain the sorted order.

---

### Example 3

**Input**
```text
nums = [1,3,5,6]
target = 7
```

**Output**
```text
4
```

**Explanation**

The target `7` is greater than every element in the array, so it should be inserted at the end.

---

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i], target <= 10^4`
- `nums` contains **distinct** integers.
- `nums` is sorted in **ascending order**.

---

## Approach

Since the array is sorted, an efficient logarithmic-time searching technique should be used to locate the target or determine its correct insertion position.

---

## Complexity Requirements

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Tags

- Binary Search
- Array
- Searching

---

