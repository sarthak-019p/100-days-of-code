/*
Day: 54
Date: 2026-10-05
 * Q107: Previous Greater Element for each element in an array.
 * For each element, find the nearest element to its left that is greater.
 * Print -1 if no greater element exists to the left.
 * Use brute force (nested loops), comma-separated output.
 * Example: arr=[4,5,2,25] -> -1,4,5,4  (nope) -> actually: -1,4,5,4? 
 * Let's recheck: arr=[4,5,2,25]
 *   4: no left -> -1
 *   5: left=[4], none greater -> -1? wait, 4<5, so -1
 *   2: left=[4,5], nearest greater on left = 5
 *   25: left=[4,5,2], nearest greater on left = 2 -> none since all < 25, so -1
 * Example: arr=[10,4,2,20,40,12,30] -> -1,10,4,-1,-1,40,40
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

    int pge[1000];
    for (int i = 0; i < n; i++) {
        pge[i] = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge[i] = arr[j];
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", pge[i]);
    }
    printf("\n");

    return 0;
}
