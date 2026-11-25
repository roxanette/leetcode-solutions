
# 8. Valid Parentheses

**LeetCode:** [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

## Problem

Determine whether a string containing parentheses, brackets, and braces is valid.

## Approach

Used a stack to store opening brackets. When a closing bracket appears, check whether it matches the most recent opening bracket. The string is valid if all brackets match and the stack is empty at the end.

## Complexity

- Time: O(n)
- Space: O(n)

## Test Cases

- `"()[]{}"` → `true`
- `"([)]"` → `false`
- `""` → `true`

## Notes

A closing bracket must match the most recent unmatched opening bracket.
