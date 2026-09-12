# 496. Next Greater Element I

## Problem

You are given two distinct 0-indexed integer arrays `nums1` and `nums2`, where `nums1` is a subset of `nums2`.

For each element in `nums1`, find its corresponding position in `nums2` and determine the **next greater element** to its right.

The next greater element of an element `x` is the **first element greater than `x`** that appears to the right of `x` in the same array.

If there is no greater element, return `-1`.

Return an array `ans` where `ans[i]` represents the next greater element of `nums1[i]`.

## Examples

### Example 1

**Input:**
```text
nums1 = [4,1,2]
nums2 = [1,3,4,2]
```
Output:
[-1,3,-1]
```
Explanation:

The next greater element for 4 is -1.
The next greater element for 1 is 3.
The next greater element for 2 is -1.
```
Example 2

Input:

nums1 = [2,4]
nums2 = [1,2,3,4]

Output:
```
[3,-1]
```
Explanation:

The next greater element for 2 is 3.
The next greater element for 4 is -1.
Constraints
1 <= nums1.length <= nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 10^4
All integers in nums1 and nums2 are unique.
All the integers of nums1 also appear in nums2.
```
Follow-up
Can you find an O(nums1.length + nums2.length) solution?
```
Topics
```
Array
Hash Table
Stack
Monotonic Stack
```
Difficulty
Easy

Problem Number
496
