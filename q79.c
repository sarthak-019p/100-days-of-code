/*
Day: 40
Date: 2026-09-18
Topic: 2D Arrays

Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int m, n;
    if (scanf("%d %d", &m, &n) == 2 && m > 0 && n > 0) {
        int mat[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        int first = 1;
        for (int sum = 0; sum < m + n - 1; sum++) {
            if (sum % 2 == 0) {
                // up-right: row goes down, col goes up
                int r = (sum < m) ? sum : m - 1;
                int c = sum - r;
                while (r >= 0 && c < n) {
                    if (!first) printf(" ");
                    printf("%d", mat[r][c]);
                    first = 0;
                    r--;
                    c++;
                }
            } else {
                // down-left: row goes up, col goes down
                int c = (sum < n) ? sum : n - 1;
                int r = sum - c;
                while (c >= 0 && r < m) {
                    if (!first) printf(" ");
                    printf("%d", mat[r][c]);
                    first = 0;
                    r++;
                    c--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}