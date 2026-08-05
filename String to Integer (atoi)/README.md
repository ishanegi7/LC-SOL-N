# 8. String to Integer (atoi)

## Problem Statement

Implement the function `myAtoi(string s)`, which converts a string into a **32-bit signed integer**.

The conversion should follow these rules:

1. **Ignore leading whitespace** (`' '`).
2. **Determine the sign**:
   - If the next character is `'-'`, the number is negative.
   - If it is `'+'`, the number is positive.
   - Otherwise, assume the number is positive.
3. **Read the integer**:
   - Read consecutive digits.
   - Ignore leading zeros.
   - Stop reading when a non-digit character is encountered or the end of the string is reached.
   - If no digits are read, return `0`.
4. **Clamp the result**:
   - If the value is less than `-2³¹`, return `-2³¹`.
   - If the value is greater than `2³¹ - 1`, return `2³¹ - 1`.

Return the resulting integer.

---

## Examples

### Example 1

**Input**
```text
s = "42"
```

**Output**
```text
42
```

**Explanation**

No leading whitespace or sign is present. The digits `42` are read successfully.

---

### Example 2

**Input**
```text
s = "   -042"
```

**Output**
```text
-42
```

**Explanation**

Leading spaces are ignored. The `-` sign makes the result negative. The leading zero does not affect the value.

---

### Example 3

**Input**
```text
s = "1337c0d3"
```

**Output**
```text
1337
```

**Explanation**

Reading stops when the first non-digit character (`'c'`) is encountered.

---

### Example 4

**Input**
```text
s = "0-1"
```

**Output**
```text
0
```

**Explanation**

Reading stops immediately after the digit `0` because the next character is not a digit.

---

### Example 5

**Input**
```text
s = "words and 987"
```

**Output**
```text
0
```

**Explanation**

Since the first non-whitespace character is not a sign or digit, no valid integer can be formed.

---

## Constraints

- `0 <= s.length <= 200`
- `s` consists of:
  - English letters (`a-z`, `A-Z`)
  - Digits (`0-9`)
  - Space (`' '`)
  - `'+'`
  - `'-'`
  - `'.'`

---

## Objective

Convert the given string into a valid **32-bit signed integer** by following the specified parsing rules.

---

## Input Format

A single string:

```text
s
```

---

## Output Format

Return an integer representing the converted value after applying all parsing and range-checking rules.

---


## Tags

- String
- Simulation
- Math
