
# 7. Move Zeroes

**LeetCode:** [Move Zeroes](https://leetcode.com/problems/move-zeroes/)

## Problem

Move all zeroes to the end of the array while maintaining the relative order of non-zero elements.

## Approach

Used a position pointer to place non-zero elements at the beginning of the array. Filled the remaining positions with zeroes.

## Complexity

- Time: O(n)
- Space: O(1)

## Test Cases

- `[0, 1, 0, 3, 12]` → `[1, 3, 12, 0, 0]`
- `[0, 0]` → `[0, 0]`

## Notes

The array is modified in-place.
