/*
Day: 22
Date: 2026-08-31
Topic: Loops without Arrays/Strings

Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>

int factorial(int d) {
    int f = 1;
    for (int i = 1; i <= d; i++) f *= i;
    return f;
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n <= 0) {
            printf("Not strong number\n");
            return 0;
        }
        long long temp = n;
        long long sum = 0;
        while (temp > 0) {
            sum += factorial(temp % 10);
            temp /= 10;
        }
        if (sum == n) {
            printf("Strong number\n");
        } else {
            printf("Not strong number\n");
        }
    }
    return 0;
}