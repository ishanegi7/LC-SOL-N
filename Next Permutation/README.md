# 31. Next Permutation

## Problem Statement

A permutation of an array of integers is an arrangement of its elements into a sequence or linear order.

Given an array of integers `nums`, rearrange the numbers into the **next lexicographically greater permutation**.

If such an arrangement is not possible (i.e., the array is in descending order), rearrange it into the **lowest possible order** (ascending order).

The replacement must be **in-place** and use **only constant extra memory**.

---

## Examples

### Example 1

**Input**
```text
nums = [1,2,3]
```

**Output**
```text
[1,3,2]
```

---

### Example 2

**Input**
```text
nums = [3,2,1]
```

**Output**
```text
[1,2,3]
```

---

### Example 3

**Input**
```text
nums = [1,1,5]
```

**Output**
```text
[1,5,1]
```

---

## Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 100`

---

## Approaches

- **Brute Force:** Generate all permutations, sort them lexicographically, and return the next permutation.
- **Better:** Find the breakpoint, swap with the next greater element, and sort the suffix.
- **Optimal:** Find the breakpoint, swap with the next greater element, and reverse the suffix.

---

## Complexity Analysis

| Approach | Time Complexity | Space Complexity |
|----------|-----------------|------------------|
| Brute Force | `O(n! × n)` | `O(n!)` |
| Better | `O(n log n)` | `O(1)` |
| Optimal | `O(n)` | `O(1)` |
