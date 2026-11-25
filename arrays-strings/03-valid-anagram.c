
#include <stdio.h>
#include <string.h>

/*
Problem: Valid Anagram
Approach: Character frequency counting
Time Complexity: O(n)
Space Complexity: O(1) - fixed-size frequency array
*/

int isAnagram(char s[], char t[]) {
    if (strlen(s) != strlen(t)) {
        return 0;
    }

    int frequency[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        frequency[(unsigned char)s[i]]++;
        frequency[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    // Test Case 1: Typical case
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test 1: %s\n",
           isAnagram(s1, t1) ? "true" : "false");
    // Expected: true

    // Test Case 2: Edge case - different characters
    char s2[] = "rat";
    char t2[] = "car";

    printf("Test 2: %s\n",
           isAnagram(s2, t2) ? "true" : "false");
    // Expected: false

    return 0;
}
