
# 3. Valid Anagram

**LeetCode:** [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

## Problem

Determine whether two strings are anagrams of each other.

## Approach

Used a frequency array to count character occurrences in the first string and decrease the counts using the second string. If any count is not zero, the strings are not anagrams.

## Complexity

- Time: O(n)
- Space: O(1) fixed-size frequency array

## Test Cases

- `"anagram"`, `"nagaram"` → `true`
- `"rat"`, `"car"` → `false`

## Notes

Both strings must contain the same characters with the same frequencies.
