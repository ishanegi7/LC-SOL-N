# 1910. Remove All Occurrences of a Substring

## Problem Statement

Given two strings `s` and `part`, repeatedly remove the **leftmost occurrence** of the substring `part` from `s` until it no longer appears.

Return the final modified string.

> A substring is a contiguous sequence of characters within a string.

---

## Examples

### Example 1

**Input**
```
s = "daabcbaabcbc"
part = "abc"
```

**Output**
```
"dab"
```

**Explanation**

The substring `"abc"` is removed repeatedly from left to right until no occurrence remains.

---

### Example 2

**Input**
```
s = "axxxxyyyyb"
part = "xy"
```

**Output**
```
"ab"
```

---

## Constraints

- `1 <= s.length <= 1000`
- `1 <= part.length <= 1000`
- `s` and `part` consist only of lowercase English letters.

---

## Function Signature

### C++

```cpp
string removeOccurrences(string s, string part);
```

---

## Input

- `s` — Original string.
- `part` — Substring to be removed repeatedly.

## Output

- Return the resulting string after all occurrences of `part` have been removed.

---

## Objective

Implement an efficient algorithm that repeatedly removes the leftmost occurrence of the given substring until none remain.

---

## Files

```
.
├── README.md
└── solution.cpp
```

> `solution.cpp` should contain your implementation.

---

## How to Run

1. Clone the repository.
2. Open `solution.cpp`.
3. Compile using a C++17 compatible compiler.

```bash
g++ solution.cpp -std=c++17 -o solution
./solution
```

---

## Test Cases

| Input | Output |
|-------|--------|
| `"daabcbaabcbc", "abc"` | `"dab"` |
| `"axxxxyyyyb", "xy"` | `"ab"` |
| `"aaaaa", "aa"` | `"a"` |
| `"abcdef", "gh"` | `"abcdef"` |

---

## Notes

- Always remove the **leftmost** occurrence first.
- Removing one occurrence may create new occurrences.
- Continue until the substring no longer exists.

---
