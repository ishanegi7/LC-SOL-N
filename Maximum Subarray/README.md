# Maximum Subarray

## Problem Statement

Given an integer array `nums`, find the **contiguous subarray** that has the largest sum and return that sum.

A subarray is a contiguous, non-empty sequence of elements within an array.

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

The subarray:

```text
[4, -1, 2, 1]
```

has the largest sum:

```text
4 + (-1) + 2 + 1 = 6
```

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

The only subarray is:

```text
[1]
```

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

The maximum subarray is:

```text
[5, 4, -1, 7, 8]
```

whose sum is:

```text
23
```

---

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`

---

## Follow-up

After solving the problem in **O(n)** time, try implementing a solution using the **Divide and Conquer** approach.

---

