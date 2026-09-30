/*
Day: 31
Date: 2026-09-09
Topic: Arrays (1D)

Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int l = 0, r = n - 1;
        while (l < r) {
            int t = arr[l];
            arr[l] = arr[r];
            arr[r] = t;
            l++;
            r--;
        }
        for (int i = 0; i < n; i++) {
            printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
        }
    }
    return 0;
}