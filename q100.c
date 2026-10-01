/*
Day: 50
Date: 2026-10-01
 * Q100: Print all sub-strings of a string.
 * Example: Input: abc  ->  Output: a,ab,abc,b,bc,c
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int first = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (!first) printf(",");
            for (int k = i; k < j; k++) {
                printf("%c", s[k]);
            }
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
