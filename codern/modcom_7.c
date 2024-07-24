#include <stdio.h>

int main(){
    float a, b, x;

    scanf("%f %f %f", &a, &b, &x);

    if (x==(a+b)){
        printf("+");
    }
    else if (x==(a-b)){
        printf("-");
    }
    else if (x==(a*b)){
        printf("*");
    }
    else if (x==(a/b)){
        printf("/");
    }

    return 0;
}