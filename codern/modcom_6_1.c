#include <stdio.h>

int main(){
    int n, q, l, r, t, k = 0;
    int m[110];

    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++){
        if (i == n-1){
            scanf("%d", &m[i]);
        }
        else {
            scanf("%d ", &m[i]);
        }
    }

    for (int i = 0; i < q; i++){
        scanf("%d %d", &l, &r);
        t = 0;
        for (int j = 0; j <= (r - l); j++){
            t += m[l + j - 1];
        }
        if (k == (q - 1)){
            printf("%d", t);
        }
        else {
            printf("%d\n", t);
        }
        k++;
    }
    return 0;
}