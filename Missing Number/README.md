# Missing Number

## Problem Statement

Given an integer array `nums` containing `n` **distinct** numbers in the range `[0, n]`, return the only number in the range that is missing from the array.

### Examples

**Example 1**

**Input:**

```text
nums = [3,0,1]
```

**Output:**

```text
2
```

**Explanation:**
There are `3` numbers, so the complete range is `[0,3]`. The number `2` is missing.

---

**Example 2**

**Input:**

```text
nums = [0,1]
```

**Output:**

```text
2
```

**Explanation:**
There are `2` numbers, so the complete range is `[0,2]`. The number `2` is missing.

---

**Example 3**

**Input:**

```text
nums = [9,6,4,2,3,5,7,0,1]
```

**Output:**

```text
8
```

**Explanation:**
There are `9` numbers, so the complete range is `[0,9]`. The number `8` is missing.

## Constraints

* `n == nums.length`
* `1 <= n <= 10⁴`
* `0 <= nums[i] <= n`
* All elements in `nums` are unique.

## Follow-up

Can you solve the problem in **O(n)** time using **O(1)** extra space?
