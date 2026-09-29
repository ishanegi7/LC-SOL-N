# 460. LFU Cache

**Difficulty:** Hard  
**Topics:** Hash Table, Linked List, Design, Doubly Linked List

## Problem

Design and implement a data structure for a **Least Frequently Used (LFU) Cache**.

Implement the `LFUCache` class:

- `LFUCache(int capacity)` initializes the cache with the given capacity.
- `int get(int key)` returns the value associated with the key if it exists. Otherwise, returns `-1`.
- `void put(int key, int value)` updates the value if the key already exists, or inserts the key if it does not exist.

When the cache reaches its capacity, the **least frequently used** key must be removed before inserting a new item.

If multiple keys have the same frequency, the **least recently used (LRU)** key among them must be removed.

Both `get` and `put` must run in **O(1) average time complexity**.


## Frequency Rules

Each key maintains a **use counter**:

- A newly inserted key starts with a frequency of `1`.
- A `get` operation on an existing key increments its frequency.
- A `put` operation on an existing key updates its value and increments its frequency.
- When multiple keys have the same frequency, the least recently used key is removed.

## Example

### Input

```text
["LFUCache", "put", "put", "get", "put", "get", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [3], [4, 4], [1], [3], [4]]
```
Output
```
[null, null, null, 1, null, -1, 3, null, -1, 3, 4]
```


Explanation

LFUCache lfu = new LFUCache(2);

lfu.put(1, 1);   // cache=[1,_], cnt(1)=1
lfu.put(2, 2);   // cache=[2,1], cnt(2)=1, cnt(1)=1
lfu.get(1);      // return 1
                 // cache=[1,2], cnt(2)=1, cnt(1)=2

lfu.put(3, 3);   // 2 is the LFU key because cnt(2)=1 is the smallest.
                 // Remove 2.
                 // cache=[3,1], cnt(3)=1, cnt(1)=2

lfu.get(2);      // return -1

lfu.get(3);      // return 3
                 // cache=[3,1], cnt(3)=2, cnt(1)=2

lfu.put(4, 4);   // Both 1 and 3 have the same frequency.
                 // 1 is the LRU key, so remove 1.
                 // cache=[4,3], cnt(4)=1, cnt(3)=2

lfu.get(1);      // return -1
lfu.get(3);      // return 3
                 // cache=[3,4], cnt(4)=1, cnt(3)=3

lfu.get(4);      // return 4
                 // cache=[4,3], cnt(4)=2, cnt(3)=3

Requirements

```
Operation	Description	Average Time
get(key)	Retrieve a value and update its frequency	O(1)
put(key, value)	Insert or update a key	O(1)
```
Constraints
```
1 <= capacity <= 10^4

0 <= key <= 10^5

0 <= value <= 10^9

At most 2 * 10^5 calls will be made to get and put.
```
Notes

The main challenge is maintaining both:

The frequency of every key.

The LRU order among keys having the same frequency.

The required O(1) average time complexity means that operations should avoid scanning all cached keys to find the LFU or LRU key.

Problem Source

LeetCode 460 - LFU Cache
