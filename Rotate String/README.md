# 796. Rotate String

## Problem Statement

Given two strings `s` and `goal`, return `true` if and only if `s` can become `goal` after performing **zero or more left shift operations**.

A **left shift** moves the leftmost character of the string to its rightmost position.

**Example:**
```text
"abcde" → "bcdea"
```

---

## Examples

### Example 1

**Input**
```text
s = "abcde"
goal = "cdeab"
```

**Output**
```text
true
```

**Explanation**
After two left shifts:

```text
abcde
↓
bcdea
↓
cdeab
```

The resulting string matches `goal`.

---

### Example 2

**Input**
```text
s = "abcde"
goal = "abced"
```

**Output**
```text
false
```

**Explanation**
No sequence of left shifts can transform `"abcde"` into `"abced"`.

---

## Constraints

- `1 <= s.length, goal.length <= 100`
- `s.length == goal.length` is **not** guaranteed.
- `s` and `goal` consist only of lowercase English letters.

---

## Observations

- One operation performs a **left rotation** of the string.
- Any number of rotations, including **zero**, is allowed.
- If the lengths differ, the strings can never be equal after rotations.
- Rotations preserve the relative order of characters.

---


## Expected Complexity

| Complexity | Target |
|------------|--------|
| Time | **O(n)** |
| Space | **O(n)** or better |

---
