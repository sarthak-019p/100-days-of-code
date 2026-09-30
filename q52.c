/*
Day: 26
Date: 2026-09-04
Topic: Nested Loops without Arrays/Strings

Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:
(No input required)
Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        if (i < n - 1) {
            printf("\n");
        }
    }
    return 0;
}