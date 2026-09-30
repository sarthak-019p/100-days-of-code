/*
Day: 37
Date: 2026-09-15
Topic: 2D Arrays

Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2 && r > 0 && c > 0) {
        int row_sum[r];
        for (int i = 0; i < r; i++) {
            row_sum[i] = 0;
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                row_sum[i] += val;
            }
        }
        for (int i = 0; i < r; i++) {
            printf("%d%c", row_sum[i], (i == r - 1) ? '\n' : ' ');
        }
    }
    return 0;
}