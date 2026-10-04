/*
Day: 53
Date: 2026-10-04
 * Q106: Next Greater Element for each element in an array.
 * For each element, find the nearest element to its right that is greater.
 * Print -1 if no greater element exists to the right.
 * Use brute force (nested loops), comma-separated output.
 * Example: arr=[4,5,2,25] -> 5,25,25,-1
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

    int nge[1000];
    for (int i = 0; i < n; i++) {
        nge[i] = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", nge[i]);
    }
    printf("\n");

    return 0;
}
