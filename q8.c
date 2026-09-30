/*
Day: 4
Date: 2026-08-13
Topic: User Inputs, Operations & Output

Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        long long sum = n * (n + 1) / 2;
        printf("Sum=%lld\n", sum);
    }
    return 0;
}