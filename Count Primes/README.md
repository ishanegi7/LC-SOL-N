# 204. Count Primes

## Problem Statement

Given an integer `n`, return the number of **prime numbers** that are **strictly less than `n`**.

A prime number is a natural number greater than `1` that has exactly two positive divisors: `1` and itself.

---

## Examples

### Example 1

**Input**
```
n = 10
```

**Output**
```
4
```

**Explanation**
The prime numbers less than `10` are:
```
2, 3, 5, 7
```
So, the answer is `4`.

---

### Example 2

**Input**
```
n = 0
```

**Output**
```
0
```

---

### Example 3

**Input**
```
n = 1
```

**Output**
```
0
```

---

## Constraints

- `0 <= n <= 5 × 10^6`

---

# Approach (Sieve of Eratosthenes)

Instead of checking every number individually for primality, use the **Sieve of Eratosthenes** to efficiently find all prime numbers less than `n`.

### Steps

1. Create a boolean array `isPrime` of size `n` and initialize every element to `true`.
2. Mark `0` and `1` as `false` since they are not prime.
3. Traverse from `2` to `√n`.
4. If the current number is prime, mark all of its multiples as non-prime.
5. After the traversal, count all indices whose value is still `true`.
6. Return the count.

---

## Why does the loop run till √n?

If a number has a factor greater than `√n`, then it must also have a factor smaller than `√n`.

Therefore, every composite number gets marked while processing numbers up to `√n`.

---

## Complexity Analysis

- **Time Complexity:** `O(n log log n)`
- **Space Complexity:** `O(n)`

---

## Tags

- Array
- Math
- Sieve of Eratosthenes
- Number Theory

-

```
