/*
Day: 34
Date: 2026-09-12
Topic: Arrays (1D)

Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int pos;
        scanf("%d", &pos);
        if (pos >= 0 && pos < n) {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }
        for (int i = 0; i < n; i++) {
            printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
        }
    }
    return 0;
}