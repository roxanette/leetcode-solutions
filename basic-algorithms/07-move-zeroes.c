
#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);

        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printArray(nums1, 5);

    int nums2[] = {0, 0};
    moveZeroes(nums2, 2);
    printArray(nums2, 2);

    return 0;
}
