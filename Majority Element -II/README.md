# 229. Majority Element II

## Problem Statement

Given an integer array `nums` of size `n`, return all elements that appear more than ⌊n / 3⌋ times.

You may return the answer in any order.

### Examples

**Example 1:**

```text
Input: nums = [3,2,3]
Output: [3]
```

**Example 2:**

```text
Input: nums = [1]
Output: [1]
```

**Example 3:**

```text
Input: nums = [1,2]
Output: [1,2]
```

---

## Constraints

- `1 <= nums.length <= 5 * 10^4`
- `-10^9 <= nums[i] <= 10^9`

---

## Approaches

### 1. Brute Force
- Count the frequency of every element by traversing the entire array.
- Add elements whose frequency is greater than `⌊n/3⌋`.
- Avoid duplicate answers.

**Time Complexity:** `O(N²)`  
**Space Complexity:** `O(1)`

---

### 2. Better Approach (HashMap)
- Store the frequency of each element using a hash map.
- Traverse the map and collect elements with frequency greater than `⌊n/3⌋`.

**Time Complexity:** `O(N)`  
**Space Complexity:** `O(N)`

---

### 3. Optimal Approach (Boyer-Moore Voting Algorithm)
- At most **two** elements can appear more than `⌊n/3⌋` times.
- Maintain two candidates and their counts.
- First pass selects potential candidates.
- Second pass verifies their actual frequencies.

**Time Complexity:** `O(N)`  
**Space Complexity:** `O(1)`

---

## Key Observation

An array can have **at most two** elements occurring more than `⌊n/3⌋` times.

Reason:

If three different elements each occurred more than `n/3` times, their total occurrences would exceed `n`, which is impossible.

---

## Tags

- Array
- Hashing
- Boyer-Moore Voting Algorithm
- Greedy
- Majority Element

---

## Follow-up

Can you solve the problem in **O(N)** time using **O(1)** extra space?
