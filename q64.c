/*
Day: 32
Date: 2026-09-10
Topic: Arrays (1D)

Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;
        if (n == 0) {
            printf("0\n");
            return 0;
        }
        int count[10] = {0};
        while (n > 0) {
            count[n % 10]++;
            n /= 10;
        }
        int max_freq = -1;
        int best_digit = -1;
        // In case of tie, smallest digit is standard (e.g. 112233 -> 1, 887799 -> 7)
        for (int d = 0; d < 10; d++) {
            if (count[d] > max_freq) {
                max_freq = count[d];
                best_digit = d;
            }
        }
        printf("%d\n", best_digit);
    }
    return 0;
}