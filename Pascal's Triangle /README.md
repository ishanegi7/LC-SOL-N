# Pascal's Triangle

## Problem Statement

Given an integer `numRows`, generate the first `numRows` of Pascal's Triangle.

Each row of Pascal's Triangle begins and ends with `1`. The values between them are determined based on the triangle's construction.

## Constraints

- `1 <= numRows <= 30`

## Input

A single integer:

- `numRows` — the number of rows to generate.

## Output

Return the first `numRows` of Pascal's Triangle as a 2D array (or list of lists).

## Example

### Input

```
5
```

### Output Format

A 2D array representing the first `numRows` rows of Pascal's Triangle.

## Approach

The implementation generates the triangle row by row and returns the resulting 2D array.

## Complexity

- **Time Complexity:** `O(numRows²)`
- **Space Complexity:** `O(numRows²)`

## Files

```
.
├── Solution.cpp
└── README.md
```

## How to Run

1. Compile the C++ source file:

```bash
g++ Solution.cpp -o solution
```

2. Run the executable:

```bash
./solution
```

## Notes

- The first row always contains a single element.
- The output should contain exactly `numRows` rows.
- The returned data structure should preserve the order of the generated rows.
