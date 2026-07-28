# 151. Reverse Words in a String

## Problem
Given a string `s`, reverse the order of its words.

A **word** is defined as a sequence of non-space characters.

The returned string should:
- Contain the words in reverse order.
- Have exactly one space between words.
- Have no leading or trailing spaces.

---

## Examples

### Example 1
**Input**
```text
s = "the sky is blue"
```

**Output**
```text
"blue is sky the"
```

---

### Example 2
**Input**
```text
s = "  hello world  "
```

**Output**
```text
"world hello"
```

**Explanation**

- Ignore leading and trailing spaces.
- Output should not contain extra spaces.

---

### Example 3
**Input**
```text
s = "a good   example"
```

**Output**
```text
"example good a"
```

**Explanation**

- Multiple spaces between words become a single space in the result.

---

## Constraints

- `1 <= s.length <= 10^4`
- `s` contains:
  - English letters (`A-Z`, `a-z`)
  - Digits (`0-9`)
  - Spaces (`' '`)
- There is at least one word.

---

## Follow-up

If the string data type is mutable in your language, can you solve the problem **in-place** using **O(1)** extra space?

---

## Tags

- String
- Two Pointers

---
