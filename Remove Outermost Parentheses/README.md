# 1021. Remove Outermost Parentheses

## Problem Description

A **valid parentheses string (VPS)** is defined as:

- An empty string `""`
- `"(" + A + ")"`, where `A` is a valid parentheses string
- `A + B`, where both `A` and `B` are valid parentheses strings

A **primitive** valid parentheses string is a non-empty valid parentheses string that cannot be split into two non-empty valid parentheses strings.

Given a valid parentheses string `s`, decompose it into its primitive components and remove the **outermost pair of parentheses** from each primitive.

Return the resulting string.

---

## Examples

### Example 1

**Input**
```
s = "(()())(())"
```

**Output**
```
"()()()"
```

---

### Example 2

**Input**
```
s = "(()())(())(()(()))"
```

**Output**
```
"()()()()(())"
```

---

### Example 3

**Input**
```
s = "()()"
```

**Output**
```
""
```

---

## Constraints

- `1 <= s.length <= 10^5`
- `s[i]` is either `'('` or `')'`
- `s` is guaranteed to be a valid parentheses string.

---

## Objective

Implement a function that:

- Identifies each primitive valid parentheses substring.
- Removes the outermost parentheses from every primitive.
- Returns the concatenated result.

---

## Function Signature

### C++
```cpp
string removeOuterParentheses(string s);
```

### Java
```java
public String removeOuterParentheses(String s)
```

### Python
```python
def removeOuterParentheses(s: str) -> str:
```

---

## Notes

- The input is always a valid parentheses string.
- Preserve the order of characters after removing the outermost parentheses from each primitive.
- Aim for an efficient solution that handles the maximum input size.

---

## Topics

- String
- Stack

---

## Difficulty

**Easy**
