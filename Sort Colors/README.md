Sort Colors

Problem Statement

Given an array nums containing only 0, 1, and 2, sort the array in-place so that:

0 (red) comes first
1 (white) comes next
2 (blue) comes last

You are not allowed to use the built-in sort function.

Example
Input:  nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Approach: Dutch National Flag Algorithm

Use three pointers:

low → position where the next 0 should be placed
mid → current element being processed
high → position where the next 2 should be placed
Rules
If nums[mid] == 0
Swap nums[low] and nums[mid]
Increment low and mid
If nums[mid] == 1
Element is already in the correct region
Increment mid
If nums[mid] == 2
Swap nums[mid] and nums[high]
Decrement high
Do not increment mid because the swapped element still needs processing
