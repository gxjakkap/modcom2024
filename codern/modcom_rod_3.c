#include <stdio.h>

int main(){
    int n;
    float p = 1;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        p *= 6;
    }
    //printf("%f\n", p);
    printf("%.10f", (1.00 / p));
    return 0;
}