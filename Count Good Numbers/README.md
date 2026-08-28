# Count Good Numbers

## Problem

A digit string is called **good** if:

- Digits at **even indices** (0-indexed) are even digits: `0, 2, 4, 6, 8`.
- Digits at **odd indices** are prime digits: `2, 3, 5, 7`.

For example, `"2582"` is good because:

- Index `0` → `2` is even.
- Index `1` → `5` is prime.
- Index `2` → `8` is even.
- Index `3` → `2` is prime.

However, `"3245"` is not good because `3` is placed at index `0`, which requires an even digit.

Given an integer `n`, return the **total number of good digit strings of length `n`**.

Since the answer may be very large, return it modulo:

`10^9 + 7`

A digit string consists of digits `0` through `9` and **may contain leading zeros**.

## Examples

### Example 1

**Input:**
```text
n = 1
5

Explanation:

The good digit strings of length 1 are:

"0", "2", "4", "6", "8"

Example 2
Input:

n = 4

Output:

400

Example 3
Input:

n = 50

Output:

564908303

Constraints
1 <= n <= 10^15

Notes
Indices are 0-based.
Even indices must contain an even digit.
Odd indices must contain a prime digit.
Leading zeros are allowed.
The answer must be returned modulo 10^9 + 7.


Topics

Math
Combinatorics
Modular Arithmetic
Fast Exponentiation

