#include <stdio.h>

char decToHexChar(int x){
    if (x < 10) {
        return '0' + x;
    } else {
        return 'A' + (x - 10);
    }
}

int main(){
    int v[3];
    char x[8];
    scanf("%d %d %d", &v[0], &v[1], &v[2]);

    x[0] = '#';

    for (int i = 0; i < 3; i++){
        x[2 * i + 1] = decToHexChar(v[i] / 16);
        x[2 * i + 2] = decToHexChar(v[i] % 16);
    }

    x[7] = '\0';

    printf("%s", x);

    return 0;
}