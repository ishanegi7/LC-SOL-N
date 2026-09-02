# 225. Implement Stack using Queues

Difficulty: Easy

Topics:
- Queue
- Stack
- Design

---

## Problem

Implement a Last-In-First-Out (LIFO) stack using only two queues.

The implemented stack should support all the functions of a normal stack:

- push
- top
- pop
- empty

---

## Implement the MyStack Class

### push(int x)

Pushes element `x` to the top of the stack.

### pop()

Removes the element on the top of the stack and returns it.

### top()

Returns the element on the top of the stack.

### empty()

Returns true if the stack is empty, otherwise returns false.

---

## Queue Operations Allowed

You must use only standard operations of a queue.

The following operations are allowed:

- Push to back
- Peek from front
- Pop from front
- Size
- Is empty

You cannot directly use stack operations on the queue.

Depending on your language, the queue may not be supported natively.

You may simulate a queue using a list or deque as long as you use only standard queue operations.

---

## Stack vs Queue

A Stack follows:

LIFO = Last In, First Out

A Queue follows:

FIFO = First In, First Out

The main challenge is to implement Stack behavior using Queue behavior.

---

## Example 1

### Input

["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]

### Output

[null, null, null, 2, 2, false]

### Explanation

MyStack myStack = new MyStack();

myStack.push(1);
myStack.push(2);

myStack.top();    // return 2
myStack.pop();    // return 2
myStack.empty();  // return false

---

## Constraints

- 1 <= x <= 9
- At most 100 calls will be made to push, pop, top, and empty.
- All the calls to pop and top are valid.

---

## Follow-up

Can you implement the stack using only one queue?

---

## Things to Think About

Before implementing the solution, think about:

1. What happens when a new element is pushed?
2. How can two queues help maintain Stack order?
3. Which element should be available first when pop() is called?
4. How can top() find the most recently pushed element?
5. What should empty() check?
6. Which operation can be made O(1)?
7. Which operation may require moving elements between queues?
8. Can the same idea be implemented using only one queue?

---

## Class Structure

MyStack

- push(int x)
- int pop()
- int top()
- boolean empty()

---

## Goal

Implement a Stack using only Queue operations.

Do not use any built-in Stack implementation.

Try to derive the approach yourself before looking at a solution.

