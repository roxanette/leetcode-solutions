
# 1. Two Sum

**LeetCode:** [Two Sum](https://leetcode.com/problems/two-sum/)

## Problem

Given an array of integers and a target, return the indices of the two numbers that add up to the target.

## Approach

Used a brute-force approach with two nested loops. Each pair of elements is checked to see if their sum equals the target.

## Complexity

- Time: O(n²)
- Space: O(1) auxiliary space

## Test Cases

- `[2, 7, 11, 15]`, target `9` → `[0, 1]`
- `[3, 3]`, target `6` → `[0, 1]`

## Notes

The solution returns the indices, not the values.
