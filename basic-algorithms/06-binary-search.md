
# 6. Binary Search

**LeetCode:** [Binary Search](https://leetcode.com/problems/binary-search/)

## Problem

Given a sorted array and a target value, return the target's index. If it is not present, return -1.

## Approach

Used two pointers, `left` and `right`, to define the search range. Checked the middle element and reduced the search range by half each iteration.

## Complexity

- Time: O(log n)
- Space: O(1)

## Test Cases

- `[-1, 0, 3, 5, 9, 12]`, target `9` → `4`
- `[-1, 0, 3, 5, 9, 12]`, target `2` → `-1`

## Notes

The input array must be sorted.
