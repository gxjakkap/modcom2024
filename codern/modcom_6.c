#include <stdio.h>

int main(){
    float a, b;
    char o;
    scanf("%f%c%f", &a, &o, &b);

    if (o == '+'){
        printf("%.2f", a+b);
    }
    else if (o == '-'){
        printf("%.2f", a-b);
    }
    else if (o == '*'){
        printf("%.2f", a*b);
    }
    else if (o == '/'){
        printf("%.2f", a/b);
    }
    return 0;
}