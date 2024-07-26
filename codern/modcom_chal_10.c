#include <stdio.h>
#include <math.h>

int main(){
    unsigned long long n, x;
    scanf("%llu", &n);
    x = pow(2, n) - 1;
    printf("%llu", x);
    return 0;
}