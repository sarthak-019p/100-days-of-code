/*
Day: 52
Date: 2026-10-03
 * Q103: Find the pivot index of an array.
 * Pivot index: left sum == right sum (excluding pivot element itself).
 * Print the leftmost pivot index, or -1 if none exists.
 * Example: nums=[1,7,3,6,5,6] -> 3  (left=11, right=11)
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    int pivotIndex = -1;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            pivotIndex = i;
            break;
        }
        leftSum += nums[i];
    }

    printf("%d\n", pivotIndex);

    return 0;
}
