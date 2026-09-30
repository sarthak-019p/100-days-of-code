/*
Day: 21
Date: 2026-08-30
Topic: Loops without Arrays/Strings

Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        int sign = (n < 0) ? -1 : 1;
        if (n < 0) n = -n;
        if (n < 10) {
            printf("%lld\n", sign * n);
            return 0;
        }
        int last = n % 10;
        long long temp = n;
        long long factor = 1;
        while (temp >= 10) {
            factor *= 10;
            temp /= 10;
        }
        int first = temp;
        long long middle = (n % factor) / 10;
        long long result = (long long)last * factor + middle * 10 + first;
        printf("%lld\n", sign * result);
    }
    return 0;
}