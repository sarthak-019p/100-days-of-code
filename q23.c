/*
Day: 12
Date: 2026-08-21
Topic: Conditional Statements

Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: â‚¹2/day 
Next 5 days late: â‚¹4/day 
Next 20 days days late: â‚¹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine â‚¹8

Input 2:
8
Output 2:
Fine â‚¹22

Input 3:
15
Output 3:
Fine â‚¹60

Input 4:
31
Output 4:
Membership Cancelled
*/

#include <stdio.h>

int main() {
    int days;
    if (scanf("%d", &days) == 1) {
        if (days <= 0) {
            printf("Fine â‚¹0\n");
        } else if (days <= 5) {
            printf("Fine â‚¹%d\n", days * 2);
        } else if (days <= 10) {
            int fine = (5 * 2) + (days - 5) * 4;
            printf("Fine â‚¹%d\n", fine);
        } else if (days <= 30) {
            int fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
            printf("Fine â‚¹%d\n", fine);
        } else {
            printf("Membership Cancelled\n");
        }
    }
    return 0;
}