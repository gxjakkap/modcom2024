#include <stdio.h>

int main(){
    int x, y = 1;

    scanf("%d", &x);

    if (x == 0){
        printf("%d", 1);
        return 0;
    }

    for (int i = 1; i <= x; i++){
        y *= i;
    }
    printf("%d", y);
    return 0;
}