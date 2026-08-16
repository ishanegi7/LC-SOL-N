# 234. Palindrome Linked List

## Problem

Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

A linked list is a palindrome if its values read the same forward and backward.

## Examples

Example 1:
Input:  head = [1,2,2,1]
Output: true

Example 2:
Input:  head = [1,2]
Output: false

## Constraints

- The number of nodes in the list is in the range [1, 10^5].
- 0 <= Node.val <= 9

## Follow Up

Can you solve it in:

- Time: O(n)
- Space: O(1)

## Approach

Think about how you can:

1. Find the middle of the linked list.
2. Reverse part of the linked list.
3. Compare the values of the two halves.
4. Determine whether the list is a palindrome.

Try to solve it without using an array or other O(n) extra space.

## Edge Cases

Consider:

- A single-node list.
- Two nodes with the same value.
- Two nodes with different values.
- An even-length palindrome.
- An odd-length palindrome.
- A non-palindrome.

## Complexity Target

Time:  O(n)
Space: O(1)

