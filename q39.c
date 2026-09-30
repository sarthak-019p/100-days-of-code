/*
Day: 20
Date: 2026-08-29
Topic: Loops without Arrays/Strings

Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;
        long long prod = 1;
        while (n > 0) {
            int d = n % 10;
            if (d % 2 != 0) {
                prod *= d;
            }
            n /= 10;
        }
        printf("%lld\n", prod);
    }
    return 0;
}