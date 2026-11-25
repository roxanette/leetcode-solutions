
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s) {
    int length = strlen(s);

    char* stack = malloc(length * sizeof(char));
    int top = -1;

    for (int i = 0; i < length; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++top] = ch;
        }
        else {
            if (top == -1) {
                free(stack);
                return false;
            }

            char opening = stack[top--];

            if ((ch == ')' && opening != '(') ||
                (ch == ']' && opening != '[') ||
                (ch == '}' && opening != '{')) {
                free(stack);
                return false;
            }
        }
    }

    bool result = (top == -1);
    free(stack);

    return result;
}

int main() {
    printf("Test 1: %s\n",
           isValid("()[]{}") ? "true" : "false");

    printf("Test 2: %s\n",
           isValid("([)]") ? "true" : "false");

    printf("Test 3: %s\n",
           isValid("") ? "true" : "false");

    return 0;
}
