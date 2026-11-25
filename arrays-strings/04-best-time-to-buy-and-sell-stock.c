
#include <stdio.h>

/*
Problem: Best Time to Buy and Sell Stock
Approach: Track minimum price and maximum profit
Time Complexity: O(n)
Space Complexity: O(1)
*/

int maxProfit(int prices[], int size) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main() {
    // Test Case 1: Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = sizeof(prices1) / sizeof(prices1[0]);

    printf("Test 1: %d\n", maxProfit(prices1, size1));
    // Expected: 5

    // Test Case 2: Edge case - prices keep decreasing
    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = sizeof(prices2) / sizeof(prices2[0]);

    printf("Test 2: %d\n", maxProfit(prices2, size2));
    // Expected: 0

    return 0;
}
