#include <stdio.h>

int goFromRight(int r, int c, int a[50][50]) {
    int sum = 0;
    for (int i = 0; i < c; i++) {
        sum += a[0][i];
    }
    for (int i = 0; i <= r; i++) {
        sum += a[i][c];
    }
    return sum;
}

int goFromLeft(int r, int c, int a[50][50]) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        sum += a[i][0];
    }
    for (int i = 0; i <= c; i++) {
        sum += a[r][i];
    }
    return sum;
}

int main() {
    int n, m, k;
    int a[50][50];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        int r, c;
        scanf("%d %d", &r, &c);
        r--;
        c--;

        int t1 = goFromRight(r, c, a);
        int t2 = goFromLeft(r, c, a);

        int t = (t1 < t2) ? t1 : t2;
        if (i == k-1){
            printf("%d", t);
        }
        else {
            printf("%d\n", t);
        }
    }

    return 0;
}
