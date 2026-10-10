/*
Day: 59
Date: 2026-10-10
 * Q117: Merge Two Sorted Arrays.
 * Input: two sorted arrays of size m and n
 * Output: merged sorted array
 * Example: arr1=[1,3,5], arr2=[2,4,6] -> 1 2 3 4 5 6
 */

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);

    int arr1[1000];
    printf("Enter %d sorted elements of first array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr2[1000];
    printf("Enter %d sorted elements of second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[2000];
    int i = 0, j = 0, k = 0;

    /*
Day: 59
Date: 2026-10-10 Merge step */
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    /*
Day: 59
Date: 2026-10-10 Copy remaining elements */
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    /*
Day: 59
Date: 2026-10-10 Print merged array */
    for (int x = 0; x < k; x++) {
        if (x > 0) printf(" ");
        printf("%d", merged[x]);
    }
    printf("\n");

    return 0;
}
