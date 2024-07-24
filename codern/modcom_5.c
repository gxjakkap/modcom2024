#include <stdio.h>

int main(){
    int a;
    float b, c, d;
    scanf("%d %f %f %f", &a, &b , &c, &d);
    printf("%d%.2f%.1f%.3f", a, b, c, d);
    return 0;
}