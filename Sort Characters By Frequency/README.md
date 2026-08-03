# 451. Sort Characters By Frequency

## Problem Statement

Given a string `s`, sort its characters in **decreasing order of their frequency**.

The **frequency** of a character is the number of times it appears in the string.

Return the sorted string. If multiple valid answers exist, return **any** of them.

---

## Examples

### Example 1

**Input**
```text
s = "tree"
```

**Output**
```text
"eert"
```

**Explanation**

- `'e'` appears 2 times.
- `'r'` and `'t'` each appear once.
- Therefore, `'e'` must come before both `'r'` and `'t'`.

`"eetr"` is also a valid answer.

---

### Example 2

**Input**
```text
s = "cccaaa"
```

**Output**
```text
"aaaccc"
```

**Explanation**

Both `'a'` and `'c'` appear 3 times.

Hence, both `"cccaaa"` and `"aaaccc"` are valid outputs.

`"cacaca"` is **not** valid because identical characters must appear together.

---

### Example 3

**Input**
```text
s = "Aabb"
```

**Output**
```text
"bbAa"
```

**Explanation**

Uppercase and lowercase letters are treated as different characters.

`"bbaA"` is also a valid answer.

---

## Constraints

- `1 <= s.length <= 5 × 10^5`
- `s` consists of:
  - Uppercase English letters (`A-Z`)
  - Lowercase English letters (`a-z`)
  - Digits (`0-9`)

---

## Objective

Rearrange the characters of the given string so that characters with higher frequencies appear before those with lower frequencies.

If two or more characters have the same frequency, any ordering among them is acceptable.

---

## Input Format

A single string:

```text
s
```


## Tags

- Hash Table
- String
- Sorting
- Heap (Priority Queue)
- Bucket Sort
