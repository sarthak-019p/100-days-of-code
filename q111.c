/*
Day: 56
Date: 2026-10-07
 * Q111: First Negative Integer in Each Subarray of Size k.
 * Input: array arr[] and integer k
 * For each window of size k, print the first negative integer.
 * If no negative exists in a window, print 0.
 * Output: results space-separated.
 * Example: arr=[-8,2,-6,1,2,-3], k=2 -> -8 -6 -6 0 -3
 */

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("k is larger than the array size.\n");
        return 1;
    }

    int first = 1;
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                if (!first) printf(" ");
                printf("%d", arr[j]);
                found = 1;
                first = 0;
                break;
            }
        }
        if (!found) {
            if (!first) printf(" ");
            printf("0");
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
