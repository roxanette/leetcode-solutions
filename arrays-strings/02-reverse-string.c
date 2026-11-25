
#include <stdio.h>
#include <string.h>

/*
Problem: Reverse String
Approach: Two pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/

void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Typical case
    char str1[] = {'h', 'e', 'l', 'l', 'o'};
    int size1 = sizeof(str1) / sizeof(str1[0]);

    reverseString(str1, size1);

    printf("Test 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%c", str1[i]);
    }
    printf("\n");
    // Expected: olleh

    // Test Case 2: Edge case - single character
    char str2[] = {'A'};
    int size2 = sizeof(str2) / sizeof(str2[0]);

    reverseString(str2, size2);

    printf("Test 2: %c\n", str2[0]);
    // Expected: A

    return 0;
}
