# 2095. Delete the Middle Node of a Linked List

## Problem

You are given the head of a singly linked list. Delete the middle node of the linked list and return the head of the modified list.

The middle node of a linked list of size `n` is the `⌊n / 2⌋`th node from the start using 0-based indexing, where `⌊x⌋` denotes the largest integer less than or equal to `x`.

For `n = 1, 2, 3, 4, and 5`, the middle nodes are `0, 1, 1, 2, and 2`, respectively.

## Examples

### Example 1

**Input:**
`head = [1,3,4,7,1,2,6]`

**Output:**
`[1,3,4,1,2,6]`

**Explanation:**

The linked list contains 7 nodes. The middle node is at index `3`, with value `7`. After deleting the middle node, the resulting list is `[1,3,4,1,2,6]`.

### Example 2

**Input:**
`head = [1,2,3,4]`

**Output:**
`[1,2,4]`

**Explanation:**

The linked list contains 4 nodes. The middle node is at index `2`, with value `3`. After deleting the middle node, the resulting list is `[1,2,4]`.

### Example 3

**Input:**
`head = [2,1]`

**Output:**
`[2]`

**Explanation:**

The linked list contains 2 nodes. The middle node is at index `1`, with value `1`. After deleting the middle node, only the first node remains.

## Middle Node Examples

| Number of Nodes | Middle Index |
|-----------------|--------------|
| 1 | 0 |
| 2 | 1 |
| 3 | 1 |
| 4 | 2 |
| 5 | 2 |

## Constraints

- The number of nodes in the list is in the range `[1, 10^5]`.
- `1 <= Node.val <= 10^5`

## Key Concepts

- Singly Linked List
- Two-Pointer Technique
- Fast and Slow Pointers
- In-Place Modification

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
