# 46. Permutations

## Problem Statement
Given an array `nums` of **distinct integers**, return all possible permutations of the array. The answer can be returned in any order.

---

## Intuition
A permutation is an arrangement of all elements in a unique order. Since every element can occupy each position exactly once, we need a systematic way to explore all possible arrangements without missing any or generating duplicates.

---

## Complexity Analysis
- **Time Complexity:** `O(n × n!)`
  - There are `n!` possible permutations, and each permutation takes `O(n)` time to store.
- **Space Complexity:** `O(n)`
  - Recursive call stack depth, excluding the output storage.

---

## Key Points
- All integers are distinct, so duplicate handling is unnecessary.
- Every permutation contains all elements exactly once.
- The solution explores every valid arrangement exactly once.
