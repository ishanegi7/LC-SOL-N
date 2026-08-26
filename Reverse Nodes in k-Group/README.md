25. Reverse Nodes in k-Group

Problem

Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

If the number of nodes is not a multiple of k, the remaining nodes at the end should stay in their original order.

You may not alter the values in the list's nodes. Only the nodes themselves may be changed.

Examples
Example 1

Input:

head = [1,2,3,4,5]
k = 2


Output:

[2,1,4,3,5]

Example 2

Input:

head = [1,2,3,4,5]
k = 3


Output:

[3,2,1,4,5]

Constraints

The number of nodes in the list is n.
1 <= k <= n <= 5000
0 <= Node.val <= 1000
Follow-up

Can you solve the problem using O(1) extra memory space?

Key Topics

Linked List
Recursion
Iteration
Pointer Manipulation


Notes

Nodes must be rearranged; their values must remain unchanged.
Every complete group of k nodes should be reversed.
If fewer than k nodes remain at the end, they should remain unchanged.
Consider both iterative and recursive approaches while thinking about the problem.
