/*
Day: 46
Date: 2026-09-24
Topic: Strings

Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/

#include <stdio.h>
#include <ctype.h>

int is_vowel(char c) {
    char lower = tolower((unsigned char)c);
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            if (!is_vowel(str[i])) {
                putchar(str[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}