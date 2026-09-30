/*
Day: 46
Date: 2026-09-24
Topic: Strings

Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>

int main() {
    char str[1000];
    if (scanf("%999s", str) == 1) {
        int seen[26] = {0};
        char rep = '\0';
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                int idx = str[i] - 'a';
                if (seen[idx]) {
                    rep = str[i];
                    break;
                }
                seen[idx] = 1;
            }
        }
        if (rep != '\0') printf("%c\n", rep);
        else printf("-1\n");
    }
    return 0;
}