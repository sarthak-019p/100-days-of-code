/*
Day: 7
Date: 2026-08-16
Topic: Conditional Statements

Q14: Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    if (scanf(" %c", &ch) == 1) {
        char lower = tolower((unsigned char)ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel\n");
        } else if (isalpha((unsigned char)ch)) {
            printf("Consonant\n");
        } else {
            printf("Not an alphabet\n");
        }
    }
    return 0;
}