#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0, f = 1;
    while (x != 911){
        scanf("%d", &x);
        if (x == 911){
            break;
        }
        if (f == 1){
            printf("%d", abs(x));
            f = 0;
        }
        else {
            printf(" %d", abs(x));
        }
    }
    return 0;
}