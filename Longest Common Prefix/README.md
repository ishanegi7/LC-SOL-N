# 14. Longest Common Prefix

## Problem Statement

Given an array of strings `strs`, write a function to find the **longest common prefix** shared among all the strings.

If there is **no common prefix**, return an empty string `""`.

---

## Examples

### Example 1

**Input**
```text
strs = ["flower","flow","flight"]
```

**Output**
```text
"fl"
```

---

### Example 2

**Input**
```text
strs = ["dog","racecar","car"]
```

**Output**
```text
""
```

**Explanation**

There is no common prefix among all the given strings.

---

## Constraints

- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists only of lowercase English letters if non-empty.

---

# Intuition

The goal is to determine the longest sequence of characters from the beginning of each string that is identical across the entire array.

As soon as a mismatch occurs, the common prefix cannot be extended further.

---

# Key Observations

- The common prefix must start from the **first character**.
- If even one string differs at a position, the prefix ends there.
- An empty string in the array immediately makes the answer an empty string.
- The answer can never be longer than the shortest string.

---

# Approach Ideas

- Compare characters column by column.
- Compare strings one by one while shrinking the prefix.
- Sort the array and compare only the first and last strings.
- Use divide and conquer.
- Build a Trie and traverse until branching occurs.

-

# Tags

- String
- Trie
