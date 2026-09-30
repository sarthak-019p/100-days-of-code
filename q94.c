/*
Day: 47
Date: 2026-09-25
Topic: Strings

Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        char longest[1000] = "";
        char current[1000] = "";
        int cur_len = 0, max_len = 0;
        
        for (int i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n' && sentence[i] != '\r') {
                current[cur_len++] = sentence[i];
            } else {
                if (cur_len > 0) {
                    current[cur_len] = '\0';
                    if (cur_len > max_len) {
                        max_len = cur_len;
                        strcpy(longest, current);
                    }
                    cur_len = 0;
                }
            }
        }
        if (cur_len > 0) {
            current[cur_len] = '\0';
            if (cur_len > max_len) {
                max_len = cur_len;
                strcpy(longest, current);
            }
        }
        printf("%s\n", longest);
    }
    return 0;
}