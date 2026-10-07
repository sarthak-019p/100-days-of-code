/*
Day: 56
Date: 2026-10-07
 * Q112: Maximum Sum Contiguous Subarray (Kadane's Algorithm).
 * Input: integer array arr[]
 * Output: maximum sum of any contiguous subarray
 * If all elements are negative, print the largest (least negative) element.
 * Example: arr=[-2,1,-3,4,-1,2,1,-5,4] -> 6  (subarray [4,-1,2,1])
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum    = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
