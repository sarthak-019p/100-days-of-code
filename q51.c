/*
Day: 26
Date: 2026-09-04
Topic: Nested Loops without Arrays/Strings

Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:
(No input required)
Output 1:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}