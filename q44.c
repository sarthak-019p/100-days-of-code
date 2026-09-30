/*
Day: 22
Date: 2026-08-31
Topic: Loops without Arrays/Strings

Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + â€¦ up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        double sum = 1.0;
        double num = 3.0;
        double den = 4.0;
        for (int i = 2; i <= n; i++) {
            sum += num / den;
            num += 2.0;
            den += 2.0;
        }
        printf("Approximate sum: %.1f\n", sum);
    }
    return 0;
}