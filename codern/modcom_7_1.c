#include <stdio.h>

int goFromLeft(int x, int y, int a[100][100]){
    printf("gfl %d %d\n", x, y);
    int t = 0, i, j;
    for (i = 0; i < y; i++){
        t += a[i][0];
        printf("gfldown %d %d\n", i, j);
        printf("gfldowns %d\n", t);
    }
    for (j = 0; j < x; j++){
        t += a[i][j];
        printf("gflright %d %d\n", i, j);
        printf("gflrights %d\n", t);
    }
    return t;
}

int goFromRight(int x, int y, int a[100][100]){
    printf("gfr %d %d\n", x, y);
    int t = 0, i = 0, j = 0;
    for (i = 0; i < y; i++){
        t += a[0][i];
        printf("gfrright %d %d\n", i, j);
        printf("gfrrights %d\n", t);
    }
    for (j = 0; j < x; j++){
        if ()
        t += a[j][i];
        printf("gfrdown %d %d\n", i, j);
        printf("gfrdowns %d\n", t);
    }
    return t;
}

int main(){
    int n, m, k;
    int a[100][100];
    /* int rc[100][100]; */

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    /* for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d", a[i][j]);
        }
    } */

    scanf("%d", &k);

    for (int i = 0; i < k; i++){
        int t, u, dl, dr;
        scanf("%d %d", &t, &u);
        
        dl = goFromLeft(t, u, a);
        dr = goFromRight(t, u, a);

        //print the least exhausting point possible
        if (dl > dr){
            printf("%d\n", dr);
        }
        else {
            printf("%d\n", dl);
        }
    }

    return 0;
}