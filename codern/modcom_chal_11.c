#include <stdio.h>

long long calcLvl(int d){
    if (d == 1) return 0;
    if (d == 2) return 10000;
    else {
        long long t = 10000;
        for (int i = 1; i < d - 1; i++){
            t += (10000 + (2500) * i);
        }
        return t;
    }
}

int main(){
    int d;
    long long xp;
    scanf("%d", &d);
    xp = calcLvl(d);
    printf("%lld", xp);
    return 0;
}