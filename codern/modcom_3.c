#include <stdio.h>
#include <stdbool.h>

int main(){
    char b;
    float h, w, bmi;
    bool y = true;

    scanf("%c", &b);
    scanf("%f\n", &h);
    scanf("%f", &w);

    bmi = w / ((h / 100) * (h / 100));

    if (b != 'O'){
        y = false;
    }

    if (h >= 180.00){
        y = false;
    }

    if (w <= 60.00){
        y = false;
    }

    if (((bmi > 25) || (bmi < 20)) && !((bmi <= 25) && (bmi >= 20))){
        y = false;
    }

    if (y){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}