/*
Day: 14
Date: 2026-08-23
Topic: Loops without Arrays/Strings

Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long sum = 0;
        for (long long i = 1, count = 0; count < n; i += 2, count++) {
            sum += i;
        }
        printf("%lld\n", sum);
    }
    return 0;
}