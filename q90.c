/*
Day: 45
Date: 2026-09-23
Topic: Strings

Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
*/

#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - ('a' - 'A');
            else if (str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + ('a' - 'A');
        }
        printf("%s", str);
    }
    return 0;
}