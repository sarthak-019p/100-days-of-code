/*
Day: 38
Date: 2026-09-16
Topic: 2D Arrays

Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/

#include <stdio.h>

int main() {
    int r1, c1;
    if (scanf("%d %d", &r1, &c1) == 2 && r1 > 0 && c1 > 0) {
        int a[r1][c1];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        int r2, c2;
        if (scanf("%d %d", &r2, &c2) == 2) {
            int b[r2][c2];
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    scanf("%d", &b[i][j]);
                }
            }
            if (r1 == r2 && c1 == c2) {
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        printf("%d%c", a[i][j] + b[i][j], (j == c1 - 1) ? '\n' : ' ');
                    }
                }
            } else {
                printf("Matrices cannot be added\n");
            }
        }
    }
    return 0;
}