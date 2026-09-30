/*
Day: 35
Date: 2026-09-13
Topic: Arrays (1D)

Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/

#include <stdio.h>

void reverse(int arr[], int l, int r) {
    while (l < r) {
        int t = arr[l];
        arr[l] = arr[r];
        arr[r] = t;
        l++;
        r--;
    }
}

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int k;
        scanf("%d", &k);
        k = k % n;
        if (k < 0) k += n;
        reverse(arr, 0, n - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);
        for (int i = 0; i < n; i++) {
            printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
        }
    }
    return 0;
}