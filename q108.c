/*
Day: 54
Date: 2026-10-05
 * Q108: Product of Array Except Self.
 * For each index i, answer[i] = product of all elements except nums[i].
 * The product of any prefix/suffix fits in a 32-bit integer.
 * Example: nums=[1,2,3,4] -> answer=[24,12,8,6]
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[1000], answer[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    /*
Day: 54
Date: 2026-10-05 Build prefix products */
    int prefix[1000];
    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    /*
Day: 54
Date: 2026-10-05 Build suffix products and compute answer */
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", answer[i]);
    }
    printf("\n");

    return 0;
}
