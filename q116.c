/*
Day: 58
Date: 2026-10-09
 * Q116: Two Sum.
 * Input: array of positive integers nums[] and integer target
 * Output: two indices i and j (space-separated) such that nums[i]+nums[j]==target
 *         Print "-1 -1" if no such pair exists.
 * Exactly one solution guaranteed.
 * Example: nums=[2,7,11,15], target=9 -> 0 1  (2+7=9)
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

    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n - 1 && !found; i++) {
        for (int j = i + 1; j < n && !found; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("-1 -1\n");
    }

    return 0;
}
