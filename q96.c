/*
Day: 48
Date: 2026-09-26
Topic: Strings

Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>

void reverse_word(char str[], int start, int end) {
    while (start < end) {
        char t = str[start];
        str[start] = str[end];
        str[end] = t;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int start = -1;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] != ' ' && str[i] != '\n' && str[i] != '\r') {
                if (start == -1) start = i;
            } else {
                if (start != -1) {
                    reverse_word(str, start, i - 1);
                    start = -1;
                }
            }
        }
        if (start != -1) {
            int len = 0;
            while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') len++;
            reverse_word(str, start, len - 1);
        }
        printf("%s", str);
    }
    return 0;
}