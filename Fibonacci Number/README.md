# 509. Fibonacci Number

## Problem Statement

The **Fibonacci sequence** is defined as follows:

- `F(0) = 0`
- `F(1) = 1`
- `F(n) = F(n - 1) + F(n - 2)` for `n > 1`

Given an integer `n`, return the `n`th Fibonacci number.

---

## Examples

### Example 1

**Input**
```text
n = 2
```

**Output**
```text
1
```

**Explanation**

`F(2) = F(1) + F(0) = 1 + 0 = 1`

---

### Example 2

**Input**
```text
n = 3
```

**Output**
```text
2
```

**Explanation**

`F(3) = F(2) + F(1) = 1 + 1 = 2`

---

### Example 3

**Input**
```text
n = 4
```

**Output**
```text
3
```

**Explanation**

`F(4) = F(3) + F(2) = 2 + 1 = 3`

---

## Constraints

- `0 <= n <= 30`

---

## Objective

Compute and return the `n`th Fibonacci number according to the Fibonacci sequence.

---

## Input Format

A single integer:

```text
n
```

---

## Output Format

Return an integer representing the `n`th Fibonacci number.

---


## Tags

- Math
- Dynamic Programming
- Recursion
- Memoization
