# 160. Intersection of Two Linked Lists

## Problem

Given the heads of two singly linked lists `headA` and `headB`, return the node at which the two lists intersect.

If the two linked lists do not intersect, return `null`.

**Important:** Intersection means the same node/reference in memory, not just nodes having the same value.

## Examples

### Example 1

```text
listA = [4,1,8,4,5]
listB = [5,6,1,8,4,5]

Output: Intersected at '8'

Example 2
listA = [1,9,1,2,4]
listB = [3,2,4]

Output: Intersected at '2'

Example 3
listA = [2,6,4]
listB = [1,5]

Output: No intersection

Constraints
Number of nodes in listA = m
Number of nodes in listB = n
1 <= m, n <= 3 * 10^4
1 <= Node.val <= 10^5
intersectVal = 0 if there is no intersection.
No cycles exist in the linked lists.
Original linked-list structure must remain unchanged.

Follow-up
Can you solve the problem in:

Time: O(m + n)
Space: O(1)

Function Signature
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB);
