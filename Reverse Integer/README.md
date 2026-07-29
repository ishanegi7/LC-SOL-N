# 7. Reverse Integer

## Problem Statement

Given a signed 32-bit integer `x`, return the integer obtained by reversing its digits.

If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2³¹, 2³¹ - 1]`, return `0`.

**Note:** You cannot use 64-bit integers (signed or unsigned).

---

## Examples

### Example 1

**Input**
```
x = 123
```

**Output**
```
321
```

---

### Example 2

**Input**
```
x = -123
```

**Output**
```
-321
```

---

### Example 3

**Input**
```
x = 120
```

**Output**
```
21
```

---

## Constraints

- `-2³¹ <= x <= 2³¹ - 1`

---

## Approach

- Initialize a variable to store the reversed number.
- Repeatedly extract the last digit of the integer.
- Before appending the digit, check whether the new value would overflow the 32-bit signed integer range.
- If overflow would occur, return `0`.
- Otherwise, append the digit to the reversed number.
- Continue until all digits have been processed.
- Return the reversed integer.

---


## Complexity Analysis

- **Time Complexity:** `O(log₁₀ n)`
- **Space Complexity:** `O(1)`

---

## Tags

- Math
- Integer
- Overflow
- Simulation

---

## Interview Questions

1. Why is an overflow check necessary before updating the reversed number?
2. Why can't a 64-bit integer be used in this problem?
3. How are negative numbers handled during reversal?
4. What happens to leading zeros after reversing?
5. Can the integer be reversed using only constant extra space?

---
