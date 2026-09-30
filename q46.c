/*
Day: 23
Date: 2026-09-01
Topic: Nested Loops without Arrays/Strings

Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:
(No input required)
Output 1:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}