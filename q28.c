/*
Day: 14
Date: 2026-08-23
Topic: Loops without Arrays/Strings

Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long product = 1;
        int has_even = 0;
        for (int i = 2; i <= n; i += 2) {
            product *= i;
            has_even = 1;
        }
        if (!has_even) product = 0;
        printf("%lld\n", product);
    }
    return 0;
}