/*
Day: 21
Date: 2026-08-30
Topic: Loops without Arrays/Strings

Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n <= 1) {
            printf("Not perfect number\n");
            return 0;
        }
        long long sum = 1;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i * i != n) {
                    sum += (n / i);
                }
            }
        }
        if (sum == n) {
            printf("Perfect number\n");
        } else {
            printf("Not perfect number\n");
        }
    }
    return 0;
}