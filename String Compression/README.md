# 443. String Compression

## Problem Statement
Given an array of characters `chars`, compress it **in-place** using the following rules:

- For each group of consecutive repeating characters:
  - If the character appears only once, keep it as it is.
  - Otherwise, write the character followed by its count.
- Counts with multiple digits should be written as separate characters.
- Return the new length of the compressed array.
- The compression must use **constant extra space**.

---

## Examples

### Example 1
**Input**
```
["a","a","b","b","c","c","c"]
```

**Output**
```
6
```

**Modified Array**
```
["a","2","b","2","c","3"]
```

---

### Example 2
**Input**
```
["a"]
```

**Output**
```
1
```

**Modified Array**
```
["a"]
```

---

### Example 3
**Input**
```
["a","b","b","b","b","b","b","b","b","b","b","b","b"]
```

**Output**
```
4
```

**Modified Array**
```
["a","b","1","2"]
```

---

## Constraints

- `1 <= chars.length <= 2000`
- `chars[i]` is a lowercase English letter, uppercase English letter, digit, or symbol.

---

# Approach

- Traverse the array while identifying groups of consecutive identical characters.
- Maintain a position where the compressed result will be written.
- For every group:
  - Write the character.
  - If its frequency is greater than `1`, write each digit of the frequency separately.
- Continue until all characters are processed.
- Return the final write position as the compressed length.

---

## Key Observations

- Compression happens **in-place**.
- Only **constant extra memory** is allowed.
- Counts greater than `9` must be stored digit by digit.
- Characters beyond the returned length are ignored.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Tags

- Array
- Two Pointers
- String
- In-Place
