/*
Day: 53
Date: 2026-10-04
 * Q105: Find the majority element in an array.
 * Majority element: appears strictly more than floor(n/2) times.
 * Print -1 if no majority element exists.
 * Example: nums=[3,2,3] -> 3
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

    /*
Day: 53
Date: 2026-10-04 Boyer-Moore Voting Algorithm */
    int candidate = nums[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    /*
Day: 53
Date: 2026-10-04 Verify the candidate */
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) freq++;
    }

    if (freq > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
