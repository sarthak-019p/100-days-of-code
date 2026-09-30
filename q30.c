/*
Day: 15
Date: 2026-08-24
Topic: Loops without Arrays/Strings

Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long rev = 0;
        int sign = (n < 0) ? -1 : 1;
        if (n < 0) n = -n;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        printf("%lld\n", sign * rev);
    }
    return 0;
}