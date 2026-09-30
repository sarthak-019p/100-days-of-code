/*
Day: 17
Date: 2026-08-26
Topic: Loops without Arrays/Strings

Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 0) {
            printf("Not Armstrong\n");
            return 0;
        }
        long long temp = n;
        int digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = n;
        long long sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            long long p = 1;
            for (int i = 0; i < digits; i++) p *= d;
            sum += p;
            temp /= 10;
        }
        if (sum == n) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}