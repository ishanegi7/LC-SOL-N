85. Maximal Rectangle

Difficulty: Hard

Topics: Array, Dynamic Programming, Stack, Matrix, Monotonic Stack

Problem

Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

Examples
Example 1

Input:
```
matrix = [
  ["1","0","1","0","0"],
  ["1","0","1","1","1"],
  ["1","1","1","1","1"],
  ["1","0","0","1","0"]
]

```
Output:
```
6
```

Explanation:

The maximal rectangle containing only 1's has an area of 6.

Example 2

Input:
```
matrix = [["0"]]

```
Output:
```
0
```
Example 3

Input:
```
matrix = [["1"]]
```

Output:
```
1
```
Constraints
```
1 <= rows, cols <= 200

matrix[i][j] is either '0' or '1'
```
Approach

The problem can be viewed as finding the largest rectangle of 1's in a binary matrix.

A useful way to think about the problem is to process the matrix row by row and maintain the number of consecutive 1's in each column.

For every row:

Maintain the height of consecutive 1's for each column.

Treat these heights as a histogram.

Find the largest rectangle possible in that histogram.

Keep track of the maximum area found across all rows.

The histogram perspective helps reduce the 2D rectangle problem into a sequence of Largest Rectangle in Histogram problems.

Key Insight

For every cell containing 1, its height represents the number of consecutive 1's above it, including the current cell.



Data Structure

A Monotonic Stack can be used to efficiently determine the largest rectangle in each histogram.

The stack maintains indices of histogram bars in increasing order of their heights.

Complexity

Let:

R = number of rows

C = number of columns

Time Complexity
O(R × C)

Space Complexity
O(C)

