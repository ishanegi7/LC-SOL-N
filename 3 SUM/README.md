# 15. 3Sum

## Problem
Given an integer array `nums`, return all the unique triplets
`[nums[i], nums[j], nums[k]]` such that:

- `i != j`
- `i != k`
- `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution set must not contain duplicate triplets.

---

## Approach

1. Sort the array.
2. Fix one element `nums[i]`.
3. Use two pointers:
   - `left = i + 1`
   - `right = n - 1`
4. Compute the sum:
   - If sum == 0, store the triplet.
   - If sum < 0, move `left`.
   - If sum > 0, move `right`.
5. Skip duplicate values to avoid repeated triplets.

---

## Dry Run

Input:
```
[-1,0,1,2,-1,-4]
```

Sorted:
```
[-4,-1,-1,0,1,2]
```

Triplets found:
```
[-1,-1,2]
[-1,0,1]
```

Output:
```
[[-1,-1,2],[-1,0,1]]
```

---

## Complexity

- Time: **O(n²)**
- Space: **O(1)** (excluding the output)

---

## Key Observations

- Sorting allows the use of the two-pointer technique.
- Skipping duplicates ensures unique triplets.
- Two pointers reduce the complexity from **O(n³)** to **O(n²)**.
