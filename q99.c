/*
Day: 50
Date: 2026-09-28
Topic: Strings

Q99: Change the date format from dd/mm/yyyy to dd-Mmm-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include <stdio.h>

int main() {
    int d, m, y;
    if (scanf("%d/%d/%d", &d, &m, &y) == 3) {
        const char *months[] = {
            "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
        };
        if (m >= 1 && m <= 12) {
            printf("%02d-%s-%d\n", d, months[m], y);
        } else {
            printf("Invalid date\n");
        }
    }
    return 0;
}