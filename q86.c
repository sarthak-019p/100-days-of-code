/*
Day: 43
Date: 2026-09-21
Topic: Strings

Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/

#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = 0;
        while (str[len] != '\0' && str[len] != '\n') len++;
        int l = 0, r = len - 1, is_pal = 1;
        while (l < r) {
            if (str[l] != str[r]) {
                is_pal = 0;
                break;
            }
            l++;
            r--;
        }
        if (is_pal) printf("Palindrome\n");
        else printf("Not palindrome\n");
    }
    return 0;
}