#include <stdio.h>

void game(int n, int x[100]){
    int i = 0, t = 0, m = -2147483647;
    for(; i < n; i++){
        t = 0;
        for (int j = 0; j < n; j++){
            if (j == i) continue;
            t += x[j];
        }
        if (t > m) m = t;
    }
    printf("%d", m);
}

int main(){
    int x[100], n, k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &x[j]);
        }
        game(n, x);
        if (i != k-1) printf("\n");
    }
    return 0;
}