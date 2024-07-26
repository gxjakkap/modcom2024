#include <stdio.h>
#include <stdlib.h>

int cmpAsc(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

int cmpDes(const void* a, const void* b) {
   return (*(int*)b - *(int*)a);
}

int main(){
    int m, t, x[20], i = 0;
    
    scanf("%d", &m);

    while (1){
        scanf("%d", &t);
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

    /* int s = sizeof(x) / sizeof(x[0]); */

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
        printf("%d", x[j]);
        if (j != i-1) printf(" ");
    }

    return 0;
}