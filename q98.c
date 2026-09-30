/*
Day: 49
Date: 2026-09-27
Topic: Strings

Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char words[20][100];
        int count = 0;
        int i = 0;
        while (line[i] != '\0' && line[i] != '\n') {
            while (line[i] == ' ') i++;
            if (line[i] == '\0' || line[i] == '\n') break;
            int len = 0;
            while (line[i] != ' ' && line[i] != '\0' && line[i] != '\n') {
                words[count][len++] = line[i++];
            }
            words[count][len] = '\0';
            count++;
        }
        if (count > 0) {
            for (int j = 0; j < count - 1; j++) {
                printf("%c.", toupper((unsigned char)words[j][0]));
            }
            if (count > 1) printf(" ");
            printf("%s\n", words[count - 1]);
        }
    }
    return 0;
}