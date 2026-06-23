# LeetCode 283 - Move Zeroes

## Problem Statement

Given an integer array `nums`, move all `0`s to the end while maintaining the relative order of the non-zero elements.

**Note:** The operation must be performed in-place without creating a copy of the array.

### Example

**Input**

```text
nums = [0,1,0,3,12]
```

**Output**

```text
[1,3,12,0,0]
```

---

## Approach: Two Pointers

We use a two-pointer technique:

* `j` keeps track of the position where the next non-zero element should be placed.
* Traverse the array using `i`.
* Whenever a non-zero element is found, swap it with the element at index `j` and increment `j`.

This ensures:

* All non-zero elements remain in their original relative order.
* All zeros are moved to the end.
* The solution works in-place with constant extra space.

---

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)

---

## Key Takeaway

The two-pointer approach efficiently moves all zeros to the end while preserving the order of non-zero elements, making it an optimal in-place solution.
