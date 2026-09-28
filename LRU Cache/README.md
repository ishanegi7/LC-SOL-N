146. LRU Cache

Difficulty: Medium
Topics: Hash Table, Linked List, Design, Doubly Linked List


Problem Statement

Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity)

Initialize the LRU cache with a positive size capacity.

int get(int key)

Return the value of the key if the key exists, otherwise return -1.

void put(int key, int value)

Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache.

If the number of keys exceeds the capacity from this operation, evict the least recently used key.

The functions get and put must each run in O(1) average time complexity.


Example 1

Input:
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]

Output:
[null, null, null, 1, null, -1, null, -1, 3, 4]


Explanation

LRUCache lRUCache = new LRUCache(2);

lRUCache.put(1, 1);
Cache is {1=1}

lRUCache.put(2, 2);
Cache is {1=1, 2=2}

lRUCache.get(1);
Returns 1.

Key 1 becomes the most recently used key.

lRUCache.put(3, 3);
Key 2 is the least recently used key, so it is evicted.

Cache becomes {1=1, 3=3}

lRUCache.get(2);
Returns -1 because key 2 is no longer present.

lRUCache.put(4, 4);
Key 1 is now the least recently used key, so it is evicted.

Cache becomes {4=4, 3=3}

lRUCache.get(1);
Returns -1.

lRUCache.get(3);
Returns 3.

lRUCache.get(4);
Returns 4.


Constraints

1 <= capacity <= 3000

0 <= key <= 10^4

0 <= value <= 10^5

At most 2 * 10^5 calls will be made to get and put.


Requirements

The implementation must ensure that:

- get() runs in O(1) average time.
- put() runs in O(1) average time.
- Existing keys can be updated.
- Recently accessed keys are treated as most recently used.
- The least recently used key is removed when the cache exceeds its capacity.


Key Concepts

- Hash Table
- Doubly Linked List
- LRU Cache
- Cache Management
- Constant Time Operations


LeetCode Problem

146. LRU Cache
