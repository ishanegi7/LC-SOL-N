402. Remove K Digits

Problem

Given a string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

Examples
Example 1

Input:

num = "1432219"
k = 3


Output:
```
"1219"
```

Explanation:

Remove the three digits 4, 3, and 2 to form the new number 1219, which is the smallest possible number.

Example 2

Input:

num = "10200"
k = 1


Output:
```
"200"
```

Explanation:

Remove the leading 1, resulting in 200.

Note that the output must not contain leading zeroes.

Example 3

Input:

num = "10"
k = 2


Output:
```
"0"
```

Explanation:

After removing both digits, nothing remains, so the result is 0.

Constraints

1 <= k <= num.length <= 10^5

num consists of only digits.

num does not have any leading zeros except for the zero itself.

Input

num — A string representing a non-negative integer.

k — The number of digits that must be removed from num.

Output
```
Return the smallest possible integer after removing exactly k digits from num.
```
The returned number must not contain leading zeroes. If no digits remain, return "0".
