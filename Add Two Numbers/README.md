2. Add Two Numbers

Problem

You are given two non-empty linked lists representing two non-negative integers.

The digits are stored in reverse order, and each node contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume that the two numbers do not contain any leading zeros, except for the number 0 itself.

Examples
Example 1
Input:  l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]

Explanation:
342 + 465 = 807

Example 2
Input:  l1 = [0], l2 = [0]
Output: [0]

Example 3

Input:  l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

Constraints

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9.
Each list represents a number without leading zeros.
The only exception is the number 0 itself.
Notes
The digits are stored from the least significant digit to the most significant digit.

For example:

[2,4,3] → 342
[5,6,4] → 465

The result is:

342 + 465 = 807

which is represented as:

[7,0,8]
