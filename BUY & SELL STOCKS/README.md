# Best Time to Buy and Sell Stock

## Problem Statement

You are given an integer array `prices` where `prices[i]` represents the price of a stock on the `iᵗʰ` day.

Your goal is to maximize the profit by choosing **one day to buy** a stock and **a later day to sell** it.

Return the maximum profit you can achieve from this single transaction. If no profit can be made, return `0`.

---

## Examples

### Example 1

**Input**

```text
prices = [7,1,5,3,6,4]
```

**Output**

```text
5
```

**Explanation**

Buy the stock on day `2` at price `1` and sell it on day `5` at price `6`.

Profit = `6 - 1 = 5`

---

### Example 2

**Input**

```text
prices = [7,6,4,3,1]
```

**Output**

```text
0
```

**Explanation**

The stock price continuously decreases, so no profitable transaction is possible.

---

## Constraints

- `1 <= prices.length <= 10^5`
- `0 <= prices[i] <= 10^4`

---

## Objective

Determine the maximum profit that can be earned by completing **exactly one buy and one sell transaction**, where the buying day must come before the selling day.

---

## Input Format

- An integer array `prices`.

## Output Format

- Return a single integer representing the maximum profit.
- If no profit is possible, return `0`.

---

## Topics

- Arrays
- Dynamic Programming
- Greedy

---

## Notes

- Only **one transaction** is allowed.
- You must **buy before you sell**.
- If every future price is less than or equal to the buying price, the answer is `0`.
- The solution should efficiently handle large input sizes up to `10^5` elements.
