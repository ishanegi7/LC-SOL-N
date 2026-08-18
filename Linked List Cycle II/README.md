# 142. Linked List Cycle II

**Difficulty:** Medium

**Topics:** Linked List, Two Pointers


## Problem

Given the `head` of a linked list, return the node where the cycle begins.

If there is no cycle in the linked list, return `null`.

A cycle exists when some node can be reached again by continuously following the `next` pointer.

Internally, `pos` denotes the index of the node that the tail's `next` pointer is connected to. `pos` is `-1` if there is no cycle.

**Note:** `pos` is not passed as a parameter.

## Examples

### Example 1

**Input:**
head = [3,2,0,-4], pos = 1

**Output:**
tail connects to node index 1

**Explanation:**
There is a cycle in the linked list where the tail connects to the second node.

### Example 2

**Input:**
head = [1,2], pos = 0

**Output:**
tail connects to node index 0

**Explanation:**
There is a cycle in the linked list where the tail connects to the first node.

### Example 3

**Input:**
head = [1], pos = -1

**Output:**
no cycle

**Explanation:**
There is no cycle in the linked list.



## Constraints

- The number of nodes in the list is in the range `[0, 10^4]`.
- `-10^5 <= Node.val <= 10^5`
- `pos` is `-1` or a valid index in the linked list.

## Follow-up

Can you solve it using `O(1)` (constant) memory?


## Notes

- Do not modify the linked list.
- If a cycle exists, return the node where the cycle begins.
- If there is no cycle, return `nullptr`.
