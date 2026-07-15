# Spiral Matrix

## Problem Statement

Given an `m x n` matrix, return all elements of the matrix in **spiral order**.

The traversal should start from the **top-left corner** and continue in a clockwise spiral until every element has been visited.

---

## Example 1

**Input**
```text
matrix = [
  [1,2,3],
  [4,5,6],
  [7,8,9]
]
```

**Output**
```text
[1,2,3,6,9,8,7,4,5]
```

---

## Example 2

**Input**
```text
matrix = [
  [1,2,3,4],
  [5,6,7,8],
  [9,10,11,12]
]
```

**Output**
```text
[1,2,3,4,8,12,11,10,9,5,6,7]
```

---

## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 10`
- `-100 <= matrix[i][j] <= 100`

---

## Requirements

- Traverse the matrix in **clockwise spiral order**.
- Visit **every element exactly once**.
- Return the traversal as a **1D array (vector)**.

---

## Function Signature

```cpp
vector<int> spiralOrder(vector<vector<int>>& matrix);
```
