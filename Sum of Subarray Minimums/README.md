# 907. Sum of Subarray Minimums

**Difficulty:** Medium

**Topics:** Array, Stack, Monotonic Stack

## Problem Statement

Given an array of integers `arr`, find the sum of `min(b)`, where `b` ranges over every contiguous subarray of `arr`.

Since the answer may be large, return the answer modulo `10^9 + 7`.

## Examples

### Example 1

**Input:**

arr = [3,1,2,4]

 Output:

17

Explanation:

The subarrays are:

[3]
[1]
[2]
[4]
[3,1]
[1,2]
[2,4]
[3,1,2]
[1,2,4]
[3,1,2,4]

Their minimum values are:

3, 1, 2, 4, 1, 1, 2, 1, 1, 1

The sum is:

17

Example 2
Input:

arr = [11,81,94,43,3]

Output:

444

Constraints

1 <= arr.length <= 3 * 10^4
1 <= arr[i] <= 3 * 10^4

Notes
A subarray must be contiguous.
The minimum of a subarray is the smallest element present in that subarray.
The final answer must be returned modulo 10^9 + 7.
The solution should handle arrays with up to 30,000 elements efficiently.
Function Signature
sumSubarrayMins(arr)

Follow-up

Can you solve this problem efficiently without explicitly generating every possible subarray?

