/*
Day: 55
Date: 2026-10-06
 * Q109: Maximum Sum of Subarrays of Size k (Sliding Window).
 * Input: array arr[] and integer k
 * Output: maximum sum among all contiguous subarrays of size k
 * Example: arr=[100,200,300,400], k=2 -> 700  (300+400)
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

    /*
Day: 55
Date: 2026-10-06 Compute sum of first window */
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    /*
Day: 55
Date: 2026-10-06 Slide the window */
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
