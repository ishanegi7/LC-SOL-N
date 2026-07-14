# Set Matrix Zeroes

## Problem Statement

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`.

The modification must be done **in-place**.

---

## Example

### Input

```text
matrix = [[1,1,1],
          [1,0,1],
          [1,1,1]]
```

### Output

```text
[[1,0,1],
 [0,0,0],
 [1,0,1]]
```

---

# Approach 1: Brute Force

## Idea

Traverse the matrix.

Whenever a `0` is found:

- Mark every non-zero element in its row with a special value (`INT_MIN`).
- Mark every non-zero element in its column with `INT_MIN`.

After the complete traversal, convert every `INT_MIN` into `0`.

We use `INT_MIN` instead of directly changing values to `0` because newly created zeros should not affect further processing.

---

## Algorithm

1. Traverse the matrix.
2. If `matrix[i][j] == 0`
   - Mark its entire row.
   - Mark its entire column.
3. Traverse the matrix again.
4. Replace every `INT_MIN` with `0`.

### Complexity

- **Time:** `O((m × n) × (m + n))`
- **Space:** `O(1)`

---

# Approach 2: Better

## Idea

Instead of marking the matrix itself, maintain two extra arrays:

- `row[]` stores whether a row should become zero.
- `col[]` stores whether a column should become zero.

During the first traversal, whenever a `0` is found, mark its row and column.

In the second traversal, if either the row or column is marked, set the element to `0`.

---

## Algorithm

1. Create two arrays:
   - `row[m]`
   - `col[n]`
2. Traverse the matrix.
3. Whenever a `0` is found:
   - `row[i] = 1`
   - `col[j] = 1`
4. Traverse the matrix again.
5. If `row[i] == 1` or `col[j] == 1`, set `matrix[i][j] = 0`.

### Complexity

- **Time:** `O(m × n)`
- **Space:** `O(m + n)`

---

# Approach 3: Optimal

## Idea

Use the first row and first column of the matrix as marker arrays.

- First row stores which columns should become zero.
- First column stores which rows should become zero.

Since `matrix[0][0]` belongs to both the first row and first column, use two boolean variables:

- `firstRowZero`
- `firstColZero`

---

## Algorithm

1. Check if the first row contains a `0`.
2. Check if the first column contains a `0`.
3. Traverse the remaining matrix.
4. Whenever a `0` is found:
   - Mark the row using `matrix[i][0]`.
   - Mark the column using `matrix[0][j]`.
5. Traverse the matrix again (excluding the first row and first column).
6. Set cells to `0` based on the markers.
7. Finally, update the first row and first column if required.

### Complexity

- **Time:** `O(m × n)`
- **Space:** `O(1)`

---

# Complexity Comparison

| Approach | Time Complexity | Space Complexity |
|----------|-----------------|------------------|
| Brute Force | `O((m × n) × (m + n))` | `O(1)` |
| Better | `O(m × n)` | `O(m + n)` |
| Optimal | `O(m × n)` | `O(1)` |

---

## Key Takeaway

- **Brute Force:** Mark rows and columns using a temporary value.
- **Better:** Use separate row and column arrays.
- **Optimal:** Reuse the first row and first column as markers to achieve constant extra space.
