
Boundary Traversal of a Binary Tree

```
Given the root of a binary tree, return its boundary traversal in anti-clockwise order, starting from the root.
```
The boundary consists of:

The root node.

The left boundary, excluding leaf nodes.

All leaf nodes from left to right.

The right boundary, excluding leaf nodes, added in reverse order.

Each node must appear only once in the traversal.

Example 1

Input: 
root = [1, 2, 3, 4, 5, 6, 7]

Output: 
```
[1, 2, 4, 5, 6, 7, 3]
```
Explanation: The root 1 is added first. The left boundary contributes 2, the leaf nodes from left to right are 4, 5, 6, 7, and the right boundary contributes 3 in bottom-up order.

Example 2

Input: 
root = [1, 2, 3, null, 4, 5, null]

Output:
```
[1, 2, 4, 5, 3]
```
Explanation: Node 2 belongs to the left boundary, leaves 4 and 5 are added from left to right, and node 3 forms the right boundary. Leaf nodes are not repeated in the side boundaries.
