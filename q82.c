/*
Day: 41
Date: 2026-09-19
Topic: Strings

Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i
*/

#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            printf("%c\n", str[i]);
        }
    }
    return 0;
}