# 42. Trapping Rain Water

**Difficulty:** Hard

**Topics:** Array, Two Pointers, Dynamic Programming, Stack, Monotonic Stack

## Problem Statement

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

## Examples

### Example 1

**Input:**
```text
height = [0,1,0,2,1,0,1,3,2,1,2,1]

Output:

6

Explanation:

The elevation map is represented by the array:

[0,1,0,2,1,0,1,3,2,1,2,1]

In this case, 6 units of rain water can be trapped.

Example 2
Input:

height = [4,2,0,3,2,5]


Output:

9

Constraints
n == height.length
1 <= n <= 2 * 10^4
0 <= height[i] <= 10^5
Key Points
Each bar has a width of 1.
Water can only be trapped between taller bars.
The amount of water at each position depends on the maximum height available on both sides.
The goal is to calculate the total trapped water efficiently.
Complexity Goal
Try to achieve:

Time Complexity: O(n)
Space Complexity: O(1)
Tags
Array Two Pointers Dynamic Programming Stack Monotonic Stack
