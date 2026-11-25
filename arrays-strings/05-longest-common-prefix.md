
# 5. Longest Common Prefix

**LeetCode:** [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

## Problem

Find the longest common prefix shared by all strings in an array.

## Approach

Compare characters of the first string with the corresponding characters of every other string. Stop when a character differs or a string ends.

## Complexity

- Time: O(n × m), where n is the number of strings and m is the length of the first string
- Space: O(m) for the returned prefix

## Test Cases

- `["flower", "flow", "flight"]` → `"fl"`
- `["dog", "racecar", "car"]` → `""`

## Notes

If no common prefix exists, return an empty string.
