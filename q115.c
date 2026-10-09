/*
Day: 58
Date: 2026-10-09
 * Q115: Valid Anagram Check.
 * Input: two strings s and t (lowercase characters assumed)
 * Output: "Anagram" if both strings have same characters with same frequencies,
 *         "Not Anagram" otherwise.
 * Example: s="listen", t="silent" -> Anagram
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[10000], t[10000];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}
