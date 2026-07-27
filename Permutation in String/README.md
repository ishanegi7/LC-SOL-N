# 567. Permutation in String

## Problem Statement

Given two strings `s1` and `s2`, determine whether `s2` contains any permutation of `s1` as a substring.

Return:

- `true` if any permutation of `s1` exists as a contiguous substring in `s2`.
- `false` otherwise.

A permutation is a rearrangement of all the characters of a string.

---

## Examples

### Example 1

**Input**
```
s1 = "ab"
s2 = "eidbaooo"
```

**Output**
```
true
```

**Explanation**

The substring `"ba"` in `s2` is a permutation of `"ab"`.

---

### Example 2

**Input**
```
s1 = "ab"
s2 = "eidboaoo"
```

**Output**
```
false
```

**Explanation**

No substring of `s2` is a permutation of `s1`.

---

## Constraints

- `1 <= s1.length, s2.length <= 10^4`
- `s1` and `s2` consist only of lowercase English letters.

---

## Function Signature

### C++

```cpp
bool checkInclusion(string s1, string s2);
```

---

## Input

- `s1` — The string whose permutation is to be searched.
- `s2` — The string in which the permutation is searched.

---

## Output

- Return `true` if `s2` contains a permutation of `s1`; otherwise return `false`.

---

## Objective

Design an efficient algorithm to determine whether any permutation of `s1` appears as a contiguous substring of `s2`.

---

## Files

```
.
├── README.md
└── solution.cpp
```

> `solution.cpp` should contain your implementation.

---


## Sample Test Cases

| s1 | s2 | Output |
|----|----|--------|
| `"ab"` | `"eidbaooo"` | `true` |
| `"ab"` | `"eidboaoo"` | `false` |
| `"adc"` | `"dcda"` | `true` |
| `"xyz"` | `"abcdefghijkl"` | `false` |

---
