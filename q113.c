/*
Day: 57
Date: 2026-10-08
 * Q113: Find the Kth Smallest Element in an Array.
 * Input: array arr[] and integer k
 * Output: the kth smallest element
 * Example: arr=[7,10,4,3,20,15], k=3 -> 7
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

    /*
Day: 57
Date: 2026-10-08 Sort array using bubble sort */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n", arr[k - 1]);

    return 0;
}
