#include <stdio.h>

int main(){
    int a;
    float b, c;
    char d;

    scanf("%d\n", &a);
    scanf("%f\n", &b);
    scanf("%f\n", &c);
    scanf("%c", &d);

    printf("suspect's age : %d\n", a);
    printf("suspect's height : %.2f\n", b);
    printf("suspect's weight : %.2f\n", c);
    printf("suspect's blood group : %c\n", d);
    return 0;
}