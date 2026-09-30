/*
Day: 42
Date: 2026-09-20
Topic: Strings

Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int vowels = 0, consonants = 0;
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            if (isalpha((unsigned char)str[i])) {
                char ch = tolower((unsigned char)str[i]);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    }
    return 0;
}