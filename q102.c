/*
Day: 51
Date: 2026-10-02
 * Q102: Find the ceil of x in a sorted array.
 * Ceil of x = smallest element >= x in arr[].
 * Output: index (0-based) of first occurrence of ceil, or -1 if not found.
 * Example: arr=[1,2,8,10,11,12,19], x=5 -> 2 (element 8, index 2)
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[1000];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    int result = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}
