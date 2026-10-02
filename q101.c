/*
Day: 51
Date: 2026-10-02
 * Q101: Find first and last occurrence of a target in a sorted array.
 * Input: sorted array nums[] and integer target
 * Output: indices of first and last occurrence, or -1,-1 if not found
 * Example: nums=[5,7,7,8,8,10], target=8 -> 3,4
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[1000];
    printf("Enter %d elements (sorted): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}
