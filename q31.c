/*
Day: 16
Date: 2026-08-25
Topic: Loops without Arrays/Strings

Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main() {
    unsigned int n;
    if (scanf("%u", &n) == 1) {
        if (n == 0) {
            printf("0\n");
            return 0;
        }
        char bin[65];
        int idx = 0;
        while (n > 0) {
            bin[idx++] = (n % 2) + '0';
            n /= 2;
        }
        for (int i = idx - 1; i >= 0; i--) {
            putchar(bin[i]);
        }
        putchar('\n');
    }
    return 0;
}