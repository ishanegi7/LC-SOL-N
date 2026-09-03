# 232. Implement Queue using Stacks

Difficulty: Easy

## Problem

Implement a FIFO (First In, First Out) queue using only two stacks.

The implemented queue should support all the functions of a normal queue:

- push
- peek
- pop
- empty

## Implement the MyQueue Class

### void push(int x)

Pushes element x to the back of the queue.

### int pop()

Removes the element from the front of the queue and returns it.

### int peek()

Returns the element at the front of the queue.

### boolean empty()

Returns true if the queue is empty, otherwise returns false.



## Notes

You must use only standard operations of a stack.


The following operations are allowed:

- Push to top
- Peek from top
- Pop from top
- Size
- Check if empty

Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque as long as you use only standard stack operations.



## Example

### Input

["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]

### Output

[null, null, null, 1, 1, false]

### Explanation

MyQueue myQueue = new MyQueue();

myQueue.push(1); // queue is: [1]

myQueue.push(2); // queue is: [1, 2]

myQueue.peek();  // return 1

myQueue.pop();   // return 1
                 // queue is: [2]

myQueue.empty(); // return false



## Constraints

- 1 <= x <= 9
- At most 100 calls will be made to push, pop, peek, and empty.
- All the calls to pop and peek are valid.


## Follow-Up

Can you implement the queue such that each operation is amortized O(1) time complexity?

In other words, performing n operations will take O(n) overall, even if one of those operations may take longer.


## Topics

- Queue
- Stack
- FIFO
- LIFO
- Data Structures
- Amortized Complexity

## LeetCode

LeetCode 232 - Implement Queue using Stacks
