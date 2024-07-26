#include <stdio.h>
#include <stdlib.h>

int cmpAsc(const void* a, const void* b) {
   return (*(long long*)a - *(long long*)b);
}

int cmpDes(const void* a, const void* b) {
   return (*(long long*)b - *(long long*)a);
}

int main(){
    int t, x[20];
    int i = 0, m;
    
    scanf("%d", &m);

    while (1){
        scanf("%lld", &t);
        if (t == 911){
            break;
        }
        if (m == 1 || m == 3){
            if (t%2 != 0) continue;
            x[i] = t;
            i++;
        }
        else if (m == 2 || m == 4){
            if (t%2 == 0) continue;
            x[i] = t;
            i++;
        }
    }

    if (m == 3 || m == 4){
        if (m == 3){
            qsort(x, i, sizeof(int), cmpAsc);
        }
        else {
            qsort(x, i, sizeof(int), cmpDes);
        }
    }

    if (i < 1){
        printf("none");
    }

    for (int j = 0; j < i; j++){
        printf("%lld", x[j]);
        if (j != i-1) printf(" ");
    }

    return 0;
}