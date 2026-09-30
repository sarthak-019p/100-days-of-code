/*
Day: 9
Date: 2026-08-18
Topic: Conditional Statements

Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F
*/

#include <stdio.h>

int main() {
    double p;
    if (scanf("%lf", &p) == 1) {
        if (p >= 90.0 && p <= 100.0) {
            printf("Grade A\n");
        } else if (p >= 80.0) {
            printf("Grade B\n");
        } else if (p >= 70.0) {
            printf("Grade C\n");
        } else if (p >= 60.0) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    }
    return 0;
}