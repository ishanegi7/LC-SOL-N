# 875. Koko Eating Bananas

## Problem Statement

Koko loves eating bananas. There are `n` piles of bananas, where the `i-th` pile contains `piles[i]` bananas. The guards will return in exactly `h` hours.

Koko chooses an integer eating speed `k` (bananas per hour). During each hour:

- She selects **one** pile of bananas.
- She eats up to `k` bananas from that pile.
- If the pile contains fewer than `k` bananas, she eats the entire pile and does not continue eating from another pile during that hour.

Your task is to determine the **minimum integer eating speed `k`** that allows Koko to finish all the bananas before the guards return.

---

## Examples

### Example 1

**Input**

```text
piles = [3,6,7,11]
h = 8
```

**Output**

```text
4
```

---

### Example 2

**Input**

```text
piles = [30,11,23,4,20]
h = 5
```

**Output**

```text
30
```

---

### Example 3

**Input**

```text
piles = [30,11,23,4,20]
h = 6
```

**Output**

```text
23
```

---

## Constraints

- `1 <= piles.length <= 10^4`
- `piles.length <= h <= 10^9`
- `1 <= piles[i] <= 10^9`

---

## Key Observations

- Koko must choose a **single constant eating speed** throughout the process.
- A pile may require multiple hours to finish depending on the chosen speed.
- A higher eating speed results in fewer total hours required.
- The goal is to find the **smallest valid eating speed** that satisfies the time limit.

---

## Edge Cases

- Only one pile of bananas.
- All piles contain the same number of bananas.
- Very large pile sizes.
- `h` is equal to the number of piles.
- `h` is much larger than the number of piles.
- Minimum possible eating speed is sufficient.
- Maximum pile size determines the required speed.

---

## Expected Complexity

- **Time Complexity:** Better than checking every possible eating speed individually.
- **Space Complexity:** `O(1)`

---

## Tags

- Array
- Binary Search

---

## Difficulty

**Medium**
