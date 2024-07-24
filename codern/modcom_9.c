/*
Given two positive integers A and B, where A is divisible by B, find the quotient of A divided by B.

Input Format
The first line of input contains a single integer A.
The second line of input contains a single integer B.

Output Format
Print a single integer representing the quotient of A divided by B.

Constraints
1 ≤ A ≤ 10^100000
1 ≤ B ≤ 10000
A is divisible by B

Example
Input (A B) 	            Output
41514936846026676417 99 	419342796424511883
*/

#include <stdio.h>
#include <string.h>

int main(){
    char a[100001], r[100001];
    int b, t = 0, l, i;

    scanf("%s %d", &a, &b);

    l = strlen(a);

    for (i = 0; i < l; i++){
        t = t * 10 + (a[i] - '0');
        r[i] = t / b;
        t = t % b;
    }

    for (i = 0; i < l; i++){
        if (r[i] != 0){
            break;
        }
    }
    
    if (i == l){
        printf("0\n");
    }
    else {
        for (; i < l; i++){
            printf("%d", r[i]);
        }
    }

    return 0;
}