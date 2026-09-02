225. Implement Stack using Queues

Difficulty: Easy
Topics: Queue, Stack, Design

Problem

Implement a Last-In-First-Out (LIFO) Stack using only two Queues.

Your stack should support all standard stack operations:

push(int x) — Adds element x to the top of the stack.
pop() — Removes and returns the element at the top.
top() — Returns the element at the top without removing it.
empty() — Returns true if the stack is empty, otherwise false.
Queue Operations Allowed

You may use only standard queue operations:

Push/add an element to the back
Peek/remove an element from the front
Get the size
Check whether the queue is empty

You must not use stack-specific operations on the queue.

Depending on the programming language, you may simulate a queue using a list or deque, but you must follow normal queue behavior.

Example
Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]

Output
[null, null, null, 2, 2, false]

Explanation
MyStack myStack = new MyStack();

myStack.push(1);
myStack.push(2);

myStack.top();    // returns 2
myStack.pop();    // returns 2
myStack.empty();  // returns false

Constraints
1 <= x <= 9
At most 100 calls will be made to push, pop, top, and empty.
All calls to pop and top are valid.
Important Observation

A Stack follows:

LIFO → Last In, First Out


A Queue follows:

FIFO → First In, First Out


The main challenge is to make queue-based operations behave like a stack.

Think about:

After calling push(1) and then push(2), how can the queue structure be arranged so that 2 becomes the next element available for pop()?

Follow-up

Can you implement the stack using only one queue?

What to Figure Out

Before coding, determine:

What should happen internally during push()?
Which operation should be O(1) and which can be more expensive?
How can two queues help you reverse the effective order?
Can the same idea be optimized to use only one queue?
Goal

Implement the following class:

MyStack
├── push(x)
├── pop()
├── top()
└── empty()


Try to derive the implementation yourself before looking at any solution.
