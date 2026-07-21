# 74. Search a 2D Matrix

## Problem Statement

You are given an `m × n` integer matrix `matrix` that satisfies the following properties:

- Each row is sorted in **non-decreasing** order.
- The first integer of each row is **greater than the last integer of the previous row**.

Given an integer `target`, determine whether the target exists in the matrix.

Return `true` if the target is found; otherwise, return `false`.

Your solution must run in **O(log(m × n))** time.

---

## Examples

### Example 1

**Input**
```text
matrix = [
  [1,3,5,7],
  [10,11,16,20],
  [23,30,34,60]
]
target = 3
```

**Output**
```text
true
```

---

### Example 2

**Input**
```text
matrix = [
  [1,3,5,7],
  [10,11,16,20],
  [23,30,34,60]
]
target = 13
```

**Output**
```text
false
```

---

## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 100`
- `-10^4 <= matrix[i][j], target <= 10^4`

---

## Approach

The matrix has a special ordering that allows it to be treated as a single sorted sequence. Use an efficient searching technique to determine whether the target exists while satisfying the required logarithmic time complexity.

---

## Topics

- Array
- Binary Search
- Matrix

---

## Follow-up

Can you solve the problem in **O(log(m × n))** time without traversing every element?
