Two Sum

📌 Problem Statement

Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

📝 Examples
Example 1

Input:

text
```
nums = [2, 7, 11, 15]
```
target = 9


Output:

```
[0, 1]
```

Explanation:

Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2

Input:

```
nums = [3, 2, 4]
```
target = 6


Output:

```
[1, 2]
```

Explanation:

Because nums[1] + nums[2] == 6, we return [1, 2].

Example 3

Input:

text
```
nums = [3, 3]
```
target = 6


Output:

text
```
[0, 1]
```

Explanation:

The two elements at indices 0 and 1 add up to the target. Even though their values are equal, they are two different elements.

⚙️ Constraints
```
2 <= nums.length <= 10⁴
-10⁹ <= nums[i] <= 10⁹
-10⁹ <= target <= 10⁹
Only one valid answer exists.
The same element cannot be used twice.
```
⏱️ Complexity Analysis

Approach	Time Complexity	Space Complexity
Brute Force	O(n²)	O(1)
Sorting + Two Pointers	O(n log n)	O(n)
Hash Map	O(n) average case	O(n)

Note: Space complexity for sorting plus two pointers may vary depending on the sorting algorithm and how the original indices are preserved.

🎯 Follow-Up

Can you design an algorithm that solves this problem in less than O(n²) time complexity?

📚 Topic

Arrays
Hash Tables
Searching
Time and Space Complexity

💡 Key Takeaway

The goal is to find two distinct elements whose sum equals the target and return their original indices.

Problem Source: LeetCode – Two Sum

Difficulty: Easy

Language: To be implemented
