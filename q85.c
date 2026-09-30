/*
Day: 43
Date: 2026-09-21
Topic: Strings

Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = 0;
        while (str[len] != '\0' && str[len] != '\n') len++;
        for (int i = len - 1; i >= 0; i--) {
            putchar(str[i]);
        }
        putchar('\n');
    }
    return 0;
}