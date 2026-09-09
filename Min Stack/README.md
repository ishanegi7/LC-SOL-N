# 155. Min Stack

## Problem

Design a stack that supports the following operations:

- `push(value)` — Push an element onto the stack.
- `pop()` — Remove the element from the top of the stack.
- `top()` — Return the element at the top of the stack.
- `getMin()` — Return the minimum element currently present in the stack.
  

Each operation must run in O(1) time.


## Example

### Input

["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

### Output

[null,null,null,null,-3,null,0,-2]

### Explanation

MinStack minStack = new MinStack();

minStack.push(-2);
minStack.push(0);
minStack.push(-3);

minStack.getMin(); // -3

minStack.pop();

minStack.top();    // 0
minStack.getMin(); // -2


## Constraints

- -2³¹ <= value <= 2³¹ - 1
- `pop`, `top`, and `getMin` will always be called on a non-empty stack.
- At most 3 * 10⁴ calls will be made to `push`, `pop`, `top`, and `getMin`.
- Each operation must have O(1) time complexity.
  

## Complexity

- Time Complexity: O(1) for each operation
- Space Complexity: O(n)

