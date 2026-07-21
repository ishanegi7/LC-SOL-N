# 1539. Kth Missing Positive Number

## Problem Statement

Given a sorted array `arr` of **distinct positive integers** and an integer `k`.

The array contains some positive integers while others are missing. Your task is to find the **kth missing positive integer**.

Return the kth missing positive integer.

---

## Examples

### Example 1

**Input**
```
arr = [2,3,4,7,11]
k = 5
```

**Output**
```
9
```

**Explanation**

The missing positive integers are:

```
1, 5, 6, 8, 9, 10, 12, ...
```

The 5th missing positive integer is `9`.

---

### Example 2

**Input**
```
arr = [1,2,3,4]
k = 2
```

**Output**
```
6
```

**Explanation**

The missing positive integers are:

```
5, 6, 7, ...
```

The 2nd missing positive integer is `6`.

---

## Constraints

- `1 <= arr.length <= 1000`
- `1 <= arr[i] <= 1000`
- `1 <= k <= 1000`
- `arr` is sorted in **strictly increasing** order.
- All elements in `arr` are positive integers.

---

## Approach

Think about how many positive numbers are missing before each element in the sorted array. Use this observation to determine where the kth missing number lies.

---

## Topics

- Array
- Binary Search

---

## Follow-up

Can you solve the problem in **O(log n)** time?
