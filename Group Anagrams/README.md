# 49. Group Anagrams

## Problem Statement

Given an array of strings `strs`, group the anagrams together. You may return the answer in **any order**.

An **anagram** is a word or phrase formed by rearranging the letters of another word using all the original letters exactly once.

---

## Examples

### Example 1

**Input**
```text
strs = ["eat","tea","tan","ate","nat","bat"]
```

**Output**
```text
[["bat"],["nat","tan"],["ate","eat","tea"]]
```

**Explanation**
- `"eat"`, `"tea"`, and `"ate"` are anagrams of each other.
- `"tan"` and `"nat"` are anagrams.
- `"bat"` has no other anagram in the array.

---

### Example 2

**Input**
```text
strs = [""]
```

**Output**
```text
[[""]]
```

---

### Example 3

**Input**
```text
strs = ["a"]
```

**Output**
```text
[["a"]]
```

---

## Constraints

- `1 <= strs.length <= 10^4`
- `0 <= strs[i].length <= 100`
- `strs[i]` consists of lowercase English letters.

---

# Intuition

Two strings belong to the same group if one can be formed by rearranging the characters of the other. The challenge is to identify a unique representation that is identical for all anagrams so they can be grouped together efficiently.

---

# Approach Ideas

- Sort each string and use the sorted string as the hash key.
- Use a character frequency count (26 lowercase letters) as the hash key.
- Compare every pair of strings (brute force).
- Build groups using character count signatures.

# Complexity Goal

Design an algorithm that groups strings efficiently without comparing every pair of strings.

---

# Tags

- Array
- Hash Table
- String
- Sorting
