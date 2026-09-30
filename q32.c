/*
Day: 16
Date: 2026-08-25
Topic: Loops without Arrays/Strings

Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 0) {
            printf("Not palindrome\n");
            return 0;
        }
        long long orig = n, rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        if (orig == rev) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    return 0;
}