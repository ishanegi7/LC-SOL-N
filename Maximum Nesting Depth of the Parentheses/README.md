# 1614. Maximum Nesting Depth of the Parentheses

## Problem Statement

Given a **valid parentheses string (VPS)** `s`, return its **maximum nesting depth**.

The **nesting depth** is defined as the maximum number of parentheses that are nested inside one another at any point in the string.

---

## Examples

### Example 1

**Input**
```text
s = "(1+(2*3)+((8)/4))+1"
```

**Output**
```text
3
```

**Explanation**

The digit `8` is enclosed within **3** pairs of nested parentheses.

---

### Example 2

**Input**
```text
s = "(1)+((2))+(((3)))"
```

**Output**
```text
3
```

**Explanation**

The digit `3` is enclosed within **3** pairs of nested parentheses.

---

### Example 3

**Input**
```text
s = "()(())((()()))"
```

**Output**
```text
3
```

---

## Constraints

- `1 <= s.length <= 100`
- `s` consists of:
  - Digits (`0-9`)
  - Operators (`+`, `-`, `*`, `/`)
  - Parentheses `(` and `)`
- It is guaranteed that `s` is a **Valid Parentheses String (VPS)**.

---

## Objective

Determine the maximum level of nested parentheses present in the given valid parentheses string.

---

## Input Format

A single string:

```text
s
```

---

## Output Format

Return an integer representing the maximum nesting depth of the parentheses.

---


## Tags

- String
- Stack
