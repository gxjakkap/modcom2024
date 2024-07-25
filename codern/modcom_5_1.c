#include <stdio.h>
#include <string.h>

char intToChar(int x){
    return x + '0';
}

int main(){
    int a, i;
    scanf("%d", &a);

    char x[40];

    for (i = 0; i < a - 1; i++){
        x[i] = intToChar(a - i - 1);
    }

    for (int j = a - 1; j > 0; j--){
        x[i] = intToChar(a - j);
        i++;
    }

    for (int k = 0; k < a; k++){
        for (int j = 0; j < (a*2 - 2); j++){
            if (x[j] == (k + '0')){
                x[j] = '0';
            }

            if (j == 0){
                printf("%c", x[j]);
            }
            else {
                printf(" %c", x[j]);
            }

            if (j == (a*2 - 3)){
                printf("\n");
            }
        }
    }

    return 0;
}