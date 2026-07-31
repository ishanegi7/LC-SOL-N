# 1903. Largest Odd Number in String

## Approach
A number is considered odd if its last digit is odd (`1, 3, 5, 7, 9`). To get the largest-valued odd substring, we should keep the substring as long as possible.
Scan the string from right to left to find the rightmost odd digit. The required answer is the substring from the beginning of the string up to that digit. 
If no odd digit is found, return an empty string.



## Algorithm
1. Traverse the string from the last character to the first.
2. Check whether the current digit is odd.
3. If an odd digit is found, return the substring from index `0` to that index (inclusive).
4. If no odd digit exists, return an empty string.


## Complexity Analysis
- **Time Complexity:** `O(n)` — Single traversal of the string.
- **Space Complexity:** `O(1)` — Constant extra space.
