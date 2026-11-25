
#include <stdio.h>
#include <stdlib.h>

/*
Problem: Two Sum
Approach: Brute force
Time Complexity: O(n^2)
Space Complexity: O(1) auxiliary space
*/

int* twoSum(int nums[], int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));

    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    return result;
}

int main() {
    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int size1 = 4;
    int target1 = 9;
    int returnSize1;

    int* result1 = twoSum(nums1, size1, target1, &returnSize1);

    printf("Test 1: [%d, %d]\n", result1[0], result1[1]);
    // Expected: [0, 1]

    free(result1);

    // Test Case 2: Edge case with duplicate values
    int nums2[] = {3, 3};
    int size2 = 2;
    int target2 = 6;
    int returnSize2;

    int* result2 = twoSum(nums2, size2, target2, &returnSize2);

    printf("Test 2: [%d, %d]\n", result2[0], result2[1]);
    // Expected: [0, 1]

    free(result2);

    return 0;
}
