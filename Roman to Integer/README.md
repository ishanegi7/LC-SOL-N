# 13. Roman to Integer

## Problem Statement

Roman numerals are represented using seven different symbols:

| Symbol | Value |
|--------|------:|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

For example:

- `2` is written as `II`.
- `12` is written as `XII`.
- `27` is written as `XXVII`.

Roman numerals are generally written from **largest to smallest** from left to right. However, there are six special cases where a smaller numeral placed before a larger numeral indicates subtraction instead of addition.

The valid subtractive combinations are:

- `I` before `V` or `X` → `4` and `9`
- `X` before `L` or `C` → `40` and `90`
- `C` before `D` or `M` → `400` and `900`

Given a valid Roman numeral string `s`, convert it to its corresponding integer value.

---

## Examples

### Example 1

**Input**
```text
s = "III"
```

**Output**
```text
3
```

**Explanation**

`III = 1 + 1 + 1 = 3`

---

### Example 2

**Input**
```text
s = "LVIII"
```

**Output**
```text
58
```

**Explanation**

`L = 50`, `V = 5`, and `III = 3`

Total = `58`

---

### Example 3

**Input**
```text
s = "MCMXCIV"
```

**Output**
```text
1994
```

**Explanation**

- `M = 1000`
- `CM = 900`
- `XC = 90`
- `IV = 4`

Total = `1994`

---

## Constraints

- `1 <= s.length <= 15`
- `s` contains only the characters:
  - `I`
  - `V`
  - `X`
  - `L`
  - `C`
  - `D`
  - `M`
- It is guaranteed that `s` is a valid Roman numeral representing a value in the range **[1, 3999]**.

---

## Objective

Convert the given Roman numeral into its equivalent integer value.

---

## Input Format

A single string:

```text
s
```

---

## Output Format

Return an integer representing the decimal value of the given Roman numeral.

---

## Tags

- Hash Table
- String
- Math
