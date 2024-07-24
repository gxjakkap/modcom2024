/*
You are given a series of equations in the form:
A _ B _ C = ?

There are two hidden operators (represented by _) that are consistent across all equations. Your task is to determine these operators and use them to calculate the result for each given set of A, B, and C values.

Write a program that takes three integers as input (A, B, and C) and outputs the result of applying the hidden operations.

Example case
Input (A B C) 	Output
240 4 3 	    180
1000 5 7 	    1400
360 3 2 	    240
*/

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a / b * c));
    return 0;
}