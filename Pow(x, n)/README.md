50. Pow(x, n)

Difficulty: Medium


Topics: Math, Recursion, Binary Exponentiation

Problem

Implement pow(x, n), which calculates x raised to the power n.


In other words:

pow(x, n) = xⁿ




Examples
Example 1

Input:

x = 2.00000
n = 10


Output:

1024.00000



Example 2

Input:

x = 2.10000
n = 3


Output:

9.26100

Example 3

Input:

x = 2.00000
n = -2


Output:

0.25000




Explanation:

2⁻² = 1 / 2² = 1 / 4 = 0.25

Constraints
-100.0 < x < 100.0
-2³¹ <= n <= 2³¹ - 1
n is an integer.
Either x is not zero or n > 0.
-10⁴ <= xⁿ <= 10⁴
Expected Approach

The solution should handle:

Positive exponents
Negative exponents
Zero exponent
Very large values of n
Follow-up

Can you solve this problem in O(log n) time?

Complexity


Try to achieve:

Time Complexity: O(log n)
Space Complexity: O(1)
