#include <stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b , &c, &d, &e);
    float s = (a+b+c+d+e) / 5.00;
    printf("%.2f", s);
    return 0;
}