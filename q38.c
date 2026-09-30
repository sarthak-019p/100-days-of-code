/*
Day: 19
Date: 2026-08-28
Topic: Loops without Arrays/Strings

Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;
        long long sum = 0;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }
        printf("%lld\n", sum);
    }
    return 0;
}