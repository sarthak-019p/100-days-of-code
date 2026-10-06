/*
Day: 55
Date: 2026-10-06
 * Q110: Maximum Element in Each Subarray of Size k (Sliding Window).
 * Input: array arr[] and integer k
 * Output: maximum element of each window of size k, space-separated
 * Example: arr=[1,2,3,1,4,5,2,3,6], k=3 -> 3 3 4 5 5 5 6
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
        int maxVal = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > maxVal) {
                maxVal = arr[j];
            }
        }
        if (!first) printf(" ");
        printf("%d", maxVal);
        first = 0;
    }
    printf("\n");

    return 0;
}
