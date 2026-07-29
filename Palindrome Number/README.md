# 9. Palindrome Number

## Problem Statement

Given an integer `x`, return `true` if `x` is a palindrome, and return `false` otherwise.

A palindrome number is a number that remains the same when its digits are read from left to right or right to left.

---

## Examples

### Example 1

**Input**
```text
x = 121
```

**Output**
```text
true
```

**Explanation**

The number `121` reads the same in both directions.

---

### Example 2

**Input**
```text
x = -121
```

**Output**
```text
false
```

**Explanation**

From left to right:
```text
-121
```

From right to left:
```text
121-
```

The number is not a palindrome.

---

### Example 3

**Input**
```text
x = 10
```

**Output**
```text
false
```

**Explanation**

The reverse of `10` is `01`, which is not equal to `10`.

---

## Constraints

- `-2³¹ <= x <= 2³¹ - 1`

---

## Follow Up

Can you solve this problem without converting the integer into a string?

---

## Approach

- Check special cases like negative numbers.
- Compare the original number with its reversed form.
- The reverse should be created using mathematical operations instead of string conversion.
- If both values are equal, the number is a palindrome.

---

## Complexity Analysis

- **Time Complexity:** `O(log₁₀ n)`
- **Space Complexity:** `O(1)`

---

## Tags

- Math
- Number
- Palindrome
- Simulation

---

## Interview Questions

1. Why are negative numbers not considered palindrome?
2. Why can't numbers ending with zero be palindrome?
3. How can we check palindrome without converting to a string?
4. What is the space complexity of the optimal approach?
5. How many iterations are required to reverse a number?

---
