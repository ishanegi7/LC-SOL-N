# 128. Longest Consecutive Sequence

**Difficulty:** Medium

## Problem Statement

Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in **O(n)** time.

---

## Examples

### Example 1

**Input**
```text
nums = [100,4,200,1,3,2]
```

**Output**
```text
4
```

**Explanation**

The longest consecutive sequence is:

```text
[1,2,3,4]
```

Length = **4**

---

### Example 2

**Input**
```text
nums = [0,3,7,2,5,8,4,6,0,1]
```

**Output**
```text
9
```

**Explanation**

The longest consecutive sequence is:

```text
[0,1,2,3,4,5,6,7,8]
```

Length = **9**

---

### Example 3

**Input**
```text
nums = [1,0,1,2]
```

**Output**
```text
3
```

**Explanation**

The longest consecutive sequence is:

```text
[0,1,2]
```

Length = **3**

---

## Constraints

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

---

# Approaches

## 1. Brute Force

### Idea
- For every element, repeatedly check whether the next consecutive element exists.
- Continue until the sequence breaks.
- Track the maximum sequence length.

### Complexity

- **Time:** `O(n²)`
- **Space:** `O(1)`

---

## 2. Better Approach (Sorting)

### Idea
- Sort the array.
- Traverse the sorted array while counting consecutive numbers.
- Ignore duplicate values.
- Reset the count whenever the sequence breaks.

### Complexity

- **Time:** `O(n log n)`
- **Space:** `O(1)` (excluding sorting space)

---

## 3. Optimal Approach (Hash Set)

### Idea
- Insert all elements into a hash set.
- A number starts a sequence only if its previous number is not present.
- From each starting number, count consecutive elements.
- Update the maximum sequence length.

### Complexity

- **Time:** `O(n)`
- **Space:** `O(n)`

---

## Complexity Comparison

| Approach | Time Complexity | Space Complexity |
|----------|-----------------|------------------|
| Brute Force | `O(n²)` | `O(1)` |
| Better (Sorting) | `O(n log n)` | `O(1)` |
| Optimal (Hash Set) | `O(n)` | `O(n)` |

---

## Key Observation

A number is the **start of a consecutive sequence** only if its predecessor (`num - 1`) is **not** present in the array.

This observation avoids repeatedly traversing the same sequence and enables an overall **O(n)** solution.
