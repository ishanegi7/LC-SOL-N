# Find a Peak Element II

## Problem Statement

A **peak element** in a 2D grid is an element that is **strictly greater** than all of its adjacent neighbors:
- Left
- Right
- Top
- Bottom

Given a **0-indexed** `m x n` matrix `mat`, where **no two adjacent cells are equal**, return the coordinates `[i, j]` of **any** peak element.

You may assume that the matrix is surrounded by a border of cells having value `-1`.

Your algorithm must run in:

- **O(m log n)** or
- **O(n log m)**

---

## Examples

### Example 1

**Input**
```text
mat = [[1,4],
       [3,2]]
```

**Output**
```text
[0,1]
```

**Explanation**

Both `4` and `3` are peak elements, so `[0,1]` and `[1,0]` are valid answers.

---

### Example 2

**Input**
```text
mat = [[10,20,15],
       [21,30,14],
       [7,16,32]]
```

**Output**
```text
[1,1]
```

**Explanation**

Both `30` and `32` are peak elements, so `[1,1]` and `[2,2]` are valid answers.

---

## Constraints

- `m == mat.length`
- `n == mat[i].length`
- `1 <= m, n <= 500`
- `1 <= mat[i][j] <= 10^5`
- No two adjacent cells are equal.

---

## Approach

> *Solution intentionally omitted.*

The required time complexity (`O(m log n)` or `O(n log m)`) suggests avoiding a full traversal of all neighboring cells. Instead, think about reducing the search space efficiently while ensuring that a peak always exists in the remaining region.

---

## Complexity

- **Time:** `O(m log n)` or `O(n log m)` (required)
- **Space:** Depends on the implementation.

---

## Tags

- Binary Search
- Matrix
- Divide and Conquer
```
