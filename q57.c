/*
Day: 29
Date: 2026-09-07
Topic: Arrays (1D)

Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long val;
            scanf("%lld", &val);
            sum += val;
        }
        printf("%lld\n", sum);
    }
    return 0;
}