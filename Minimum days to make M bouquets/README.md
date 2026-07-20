# 1482. Minimum Number of Days to Make m Bouquets

## Intuition

We need to find the **minimum day** on which it is possible to make `m` bouquets.

For any chosen day:

- Flowers with `bloomDay[i] <= day` are available.
- Flowers with `bloomDay[i] > day` are unavailable.

If bouquets can be made on a particular day, they can also be made on every later day.

This monotonic property allows us to use **Binary Search on the answer**.

---

## Approach

### Step 1

If

```text
m × k > n
```

then it is impossible to make the required bouquets.

Return `-1`.

---

### Step 2

Binary search over the answer.

Search range:

```text
low = minimum bloom day
high = maximum bloom day
```

---

### Step 3

For every middle day, check whether making `m` bouquets is possible.

Maintain:

- `cnt` → number of consecutive bloomed flowers.
- `noOfB` → total bouquets formed.

Traverse the array.

- If current flower has bloomed

```text
cnt++
```

- Otherwise, the consecutive segment ends.

From a segment of length `cnt`, maximum bouquets are

```text
cnt / k
```

Add them to

```text
noOfB
```

and reset

```text
cnt = 0
```

After the loop, process the final segment similarly.

If

```text
noOfB >= m
```

then the current day is feasible.

---

## Dry Run

```
bloomDay = [7,7,7,7,12,7,7]
m = 2
k = 3
```

### Day = 7

Available flowers

```
[x x x x _ x x]
```

Consecutive segments:

```
Length = 4 → 4/3 = 1 bouquet
Length = 2 → 2/3 = 0 bouquet
```

Total

```
noOfB = 1
```

Not enough.

---

### Day = 12

Available

```
[x x x x x x x]
```

Single segment

```
Length = 7
```

Bouquets

```
7/3 = 2
```

Enough.

Answer = **12**

---

## Algorithm

1. Check if `m * k > n`.
2. Find minimum and maximum bloom day.
3. Binary search between them.
4. For each middle day, count bouquets using consecutive flower segments.
5. If enough bouquets are formed, search left.
6. Otherwise search right.
7. Return the first feasible day.

---

## Correctness

- The feasibility function correctly counts the maximum bouquets from every consecutive bloomed segment using `cnt / k`.
- If bouquets can be made on day `d`, they can also be made on every day after `d`.
- Therefore, the feasibility function is monotonic.
- Binary Search always finds the smallest feasible day.

Hence the algorithm always returns the minimum number of days required.

---

## Complexity Analysis

- Feasibility Check: **O(n)**
- Binary Search: **O(log(maxBloomDay))**

Overall Time Complexity:

```text
O(n × log(maxBloomDay))
```

Space Complexity:

```text
O(1)
```
