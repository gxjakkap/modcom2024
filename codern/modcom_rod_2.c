#include <stdio.h>

int fac(int x){
    if (x==0) return 1;
    int y = 1;
    for (int i = 1; i <= x; i++){
        y *= i;
    }
    return y;
}

int main(){
    int n = 0, r = 0, p = 0, c = 0;

    scanf("%d %d", &n, &r);

    p = fac(n) / fac(n-r);
    c = fac(n) / (fac(n-r) * fac(r));
    
    printf("%d\n", c);
    printf("%d", p);
    return 0;
}