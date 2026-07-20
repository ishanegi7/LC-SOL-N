# 1283. Find the Smallest Divisor Given a Threshold

## Intuition

We need to find the **smallest divisor** such that

```text
ceil(nums[0] / divisor) +
ceil(nums[1] / divisor) +
...
<= threshold
```

As the divisor increases, the total sum of rounded-up divisions decreases (or remains the same).

This monotonic property allows us to use **Binary Search on the Answer**.

---

## Dry Run

```
nums = [1,2,5,9]
threshold = 6
```

Search range

```
low = 1
high = 9
```

### mid = 5

```
ceil(1/5)=1
ceil(2/5)=1
ceil(5/5)=1
ceil(9/5)=2

Sum = 5
```

Valid.

Search on the left.

---

### mid = 2

```
1 + 1 + 3 + 5 = 10
```

Not valid.

Search on the right.

---

### mid = 4

```
1 + 1 + 2 + 3 = 7
```

Not valid.

Search on the right.

---

### mid = 5

```
Sum = 5
```

Smallest valid divisor = **5**

---

## Algorithm

1. Set `low = 1` and `high = maximum element of nums`.
2. Perform Binary Search on this range.
3. For every middle divisor, calculate:

```text
Σ ceil(nums[i] / divisor)
```

4. If the sum is less than or equal to `threshold`, search on the left.
5. Otherwise, search on the right.
6. Return `low`.

---

## Correctness

- As the divisor increases, every `ceil(nums[i] / divisor)` never increases.
- Therefore, the total sum is monotonic.
- The checking function correctly computes the required sum.
- Binary Search finds the smallest divisor for which the sum becomes less than or equal to the threshold.

Hence, the algorithm always returns the smallest valid divisor.

---

## Complexity Analysis

- **Time Complexity:** `O(n × log(max(nums)))`
- **Space Complexity:** `O(1)`
