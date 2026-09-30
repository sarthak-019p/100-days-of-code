/*
Day: 19
Date: 2026-08-28
Topic: Loops without Arrays/Strings

Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) == 2) {
        long long lcm = (a / gcd(a, b)) * b;
        if (lcm < 0) lcm = -lcm;
        printf("%lld\n", lcm);
    }
    return 0;
}