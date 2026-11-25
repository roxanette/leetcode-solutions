
# 4. Best Time to Buy and Sell Stock

**LeetCode:** [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Problem

Find the maximum profit from buying and selling a stock once.

## Approach

Track the minimum price seen so far and calculate the profit at each price. Update the maximum profit whenever a better profit is found.

## Complexity

- Time: O(n)
- Space: O(1)

## Test Cases

- `[7, 1, 5, 3, 6, 4]` → `5`
- `[7, 6, 4, 3, 1]` → `0`

## Notes

The stock must be bought before it is sold. If no profit is possible, return zero.
