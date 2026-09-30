/*
Day: 5
Date: 2026-08-14
Topic: User Inputs, Operations & Output

Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>

int main() {
    int total_sec;
    if (scanf("%d", &total_sec) == 1) {
        int h = total_sec / 3600;
        int rem = total_sec % 3600;
        int m = rem / 60;
        int s = rem % 60;
        printf("%d:%d:%d\n", h, m, s);
    }
    return 0;
}