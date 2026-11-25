
# 2. Reverse String

**LeetCode:** [Reverse String](https://leetcode.com/problems/reverse-string/)

## Problem

Reverse an array of characters in-place.

## Approach

Used two pointers, one at the beginning and one at the end. Swapped the characters and moved both pointers toward the center.

## Complexity

- Time: O(n)
- Space: O(1)

## Test Cases

- `['h', 'e', 'l', 'l', 'o']` → `['o', 'l', 'l', 'e', 'h']`
- `['A']` → `['A']`

## Notes

The array is modified directly without creating another array.
