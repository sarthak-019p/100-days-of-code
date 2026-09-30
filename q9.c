/*
Day: 5
Date: 2026-08-14
Topic: User Inputs, Operations & Output

Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/

#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    if (scanf("%lf %lf %lf", &p, &r, &t) == 3) {
        double si = (p * r * t) / 100.0;
        double amount = p * pow((1.0 + r / 100.0), t);
        double ci = amount - p;
        printf("Simple Interest=%g, Compound Interest=%.2f\n", si, ci);
    }
    return 0;
}