#include <stdio.h>
#include <string.h>

int ggpow(int x, int n){
    int y = x;
    if (n == 0){
        return 1;
    }
    for (int i = 1; i < n; i++){
        y *= x;
    }
    return y;
}

int main(){
    char a[31];
    int t = 0;

    scanf("%s", &a);
    for (int i = 0; i<strlen(a); i++){
        if (a[i] == '1'){
            t += ggpow(2, (strlen(a) - i - 1));
        }
    }
    printf("%d", t);
    return 0;
}