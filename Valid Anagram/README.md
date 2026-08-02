# 242. Valid Anagram

## 📝 Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an **anagram** of `s`, and `false` otherwise.

An **anagram** is a word or phrase formed by rearranging the letters of another word, using **all the original characters exactly once**.

---

## 📥 Input

- Two strings:
  - `s`
  - `t`

---

## 📤 Output

- Return `true` if `t` is an anagram of `s`.
- Otherwise, return `false`.

---

## 📌 Examples

### Example 1

**Input**
```text
s = "anagram"
t = "nagaram"
```

**Output**
```text
true
```

**Explanation**

Both strings contain the same characters with the same frequencies.

---

### Example 2

**Input**
```text
s = "rat"
t = "car"
```

**Output**
```text
false
```

**Explanation**

The characters in the two strings are different, so they are not anagrams.

---

## ✅ Constraints

- `1 <= s.length, t.length <= 5 × 10^4`
- `s` and `t` consist of lowercase English letters.

---

## 💡 Follow-up

If the input strings contain **Unicode characters** instead of only lowercase English letters, how would you adapt your approach?

---

## 🎯 Expected Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` (for lowercase English letters) or `O(k)` for a generalized character set.
