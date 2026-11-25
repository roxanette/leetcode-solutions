
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* result = malloc(1);
        result[0] = '\0';
        return result;
    }

    int length = strlen(strs[0]);

    char* prefix = malloc(length + 1);

    for (int i = 0; i < length; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != current) {
                prefix[i] = '\0';
                return prefix;
            }
        }

        prefix[i] = current;
    }

    prefix[length] = '\0';
    return prefix;
}

int main() {
    char* words1[] = {"flower", "flow", "flight"};
    char* result1 = longestCommonPrefix(words1, 3);
    printf("Common prefix: \"%s\"\n", result1);
    free(result1);

    char* words2[] = {"dog", "racecar", "car"};
    char* result2 = longestCommonPrefix(words2, 3);
    printf("Common prefix: \"%s\"\n", result2);
    free(result2);

    return 0;
}
