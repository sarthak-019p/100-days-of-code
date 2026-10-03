/*
Day: 52
Date: 2026-10-03
 * Q104: Find the pivot integer x (1 to n).
 * Pivot x: sum(1..x) == sum(x..n)
 * Print x, or -1 if none exists.
 * Example: n=8 -> 6  (1+2+3+4+5+6 = 6+7+8 = 21)
 */

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;
    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        int leftSum  = x * (x + 1) / 2;
        int rightSum = totalSum - leftSum + x; /*
Day: 52
Date: 2026-10-03 sum from x to n */
        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}
