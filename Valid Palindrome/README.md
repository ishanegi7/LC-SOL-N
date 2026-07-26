# 125. Valid Palindrome

## 📌 Problem Statement

A phrase is considered a **palindrome** if, after:

- Converting all uppercase letters to lowercase.
- Removing all non-alphanumeric characters.

it reads the same forward and backward.

Given a string `s`, return `true` if it is a palindrome; otherwise, return `false`.

---

## 📝 Examples

### Example 1

**Input**
```text
s = "A man, a plan, a canal: Panama"
```

**Output**
```text
true
```

**Explanation**
```text
After preprocessing:
"amanaplanacanalpanama"

The string reads the same forward and backward.
```

---

### Example 2

**Input**
```text
s = "race a car"
```

**Output**
```text
false
```

**Explanation**
```text
After preprocessing:
"raceacar"

It is not the same when reversed.
```

---

### Example 3

**Input**
```text
s = " "
```

**Output**
```text
true
```

**Explanation**
```text
After removing all non-alphanumeric characters, the string becomes empty ("").

An empty string is considered a palindrome.
```

---

## 📋 Constraints

- `1 <= s.length <= 2 × 10^5`
- `s` consists only of printable ASCII characters.

---

## 🎯 Objective

Determine whether the given string forms a palindrome after:

- Ignoring letter case.
- Ignoring all non-alphanumeric characters.

---

## ⚠️ Requirements

- Ignore uppercase and lowercase differences.
- Ignore spaces, punctuation, and special characters.
- Consider only letters (`A-Z`, `a-z`) and digits (`0-9`).

---

## ⏱ Expected Complexity

| Complexity | Value |
|------------|-------|
| Time | `O(n)` |
| Space | `O(1)` |

---

## 📚 Topics

- Two Pointers
- String
