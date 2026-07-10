# Maximum Subarray

## Problem Statement

Given an integer array `nums`, find the contiguous subarray with the largest sum and return that sum.

A **subarray** is a contiguous non-empty sequence of elements within an array.

---

## Examples

### Example 1

**Input**
```text
nums = [-2,1,-3,4,-1,2,1,-5,4]
```

**Output**
```text
6
```

**Explanation**

The subarray `[4, -1, 2, 1]` has the largest sum, which is `6`.

---

### Example 2

**Input**
```text
nums = [1]
```

**Output**
```text
1
```

**Explanation**

The only subarray is `[1]`, so the maximum sum is `1`.

---

### Example 3

**Input**
```text
nums = [5,4,-1,7,8]
```

**Output**
```text
23
```

**Explanation**

The entire array forms the maximum subarray with a sum of `23`.

---

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`

---

## Objective

Determine the maximum possible sum of any contiguous subarray within the given array.

---

## Input Format

- An integer array `nums`.

## Output Format

- Return a single integer representing the maximum subarray sum.

---

## Follow-Up

After solving the problem with an efficient linear-time approach, try implementing a solution using the **Divide and Conquer** technique.

---

## Topics

- Arrays
- Dynamic Programming
- Divide and Conquer

---

## Difficulty

**Medium**

---

## Notes

- The subarray must contain **at least one element**.
- Negative numbers may appear in the array.
- The answer should be the maximum possible sum among all contiguous subarrays.
