# 90. Subsets II

## Problem Statement

Given an integer array `nums` that **may contain duplicate elements**, return **all possible subsets** (the power set).

The solution set **must not contain duplicate subsets**. You may return the answer in **any order**.

---

## Examples

### Example 1

**Input:**
```text
nums = [1,2,2]
```

**Output:**
```text
[[], [1], [1,2], [1,2,2], [2], [2,2]]
```

---

### Example 2

**Input:**
```text
nums = [0]
```

**Output:**
```text
[[], [0]]
```

---

## Constraints

- `1 <= nums.length <= 10`
- `-10 <= nums[i] <= 10`

---

# Intuition

Since the array may contain **duplicate elements**, generating all subsets directly can produce **duplicate subsets**.

The goal is to generate every **unique subset exactly once**.

---

# Approach

A valid solution should:

1. Handle duplicate elements carefully.
2. Generate all possible subsets.
3. Ensure duplicate subsets are not included in the final answer.
4. Return all unique subsets in any order.

---

# Complexity

- **Time Complexity:** `O(2ⁿ × n)`
- **Space Complexity:** `O(2ⁿ × n)`

> There are at most `2ⁿ` unique subsets, and storing each subset may require up to `n` elements.

---

# Edge Cases

- Array contains only one element.
- Array contains all duplicate elements.
- Array contains negative numbers.
- Empty subset should always be included.
- Entire array is also a valid subset.
- Duplicate subsets must not appear in the output.

---

# Tags

- Backtracking
- Recursion
- Array
- Sorting
- Depth-First Search (DFS)

---

---

# Follow-up

- Can you generate unique subsets without using extra data structures?
- Why is sorting useful when duplicate elements are present?
- How would the solution differ if all elements were guaranteed to be unique?
