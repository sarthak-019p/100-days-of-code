/*
Day: 32
Date: 2026-09-10
Topic: Arrays (1D)

Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n1, n2;
    if (scanf("%d", &n1) == 1 && n1 >= 0) {
        int arr1[n1];
        for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
        if (scanf("%d", &n2) == 1 && n2 >= 0) {
            int arr2[n2];
            for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
            
            int first = 1;
            for (int i = 0; i < n1; i++) {
                if (!first) printf(" ");
                printf("%d", arr1[i]);
                first = 0;
            }
            for (int i = 0; i < n2; i++) {
                if (!first) printf(" ");
                printf("%d", arr2[i]);
                first = 0;
            }
            printf("\n");
        }
    }
    return 0;
}