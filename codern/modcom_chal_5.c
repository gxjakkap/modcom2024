#include <stdio.h>

int fac(int x){
    int y = 1;
    for (int i = 1; i<=x; i++){
        y *= i;
    }
    return y;
}

int main(){
    int n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &t);
        printf("%d\n", fac(t));
    }
    return 0;
}