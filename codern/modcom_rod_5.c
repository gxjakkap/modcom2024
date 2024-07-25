#include <stdio.h>
#include <string.h>

char decToHexChar(int x){
    char y;
    if (x > 9){
        y = x + '0';
    }
    else {
        switch (x)
        {
            case 10:
                y = 'A';
                break;
            case 11:
                y = 'B';
                break;
            case 12:
                y = 'c';
                break;
            case 13:
                y = 'D';
                break;
            case 14:
                y = 'E';
                break;
            case 15:
                y = 'F';
                break;
            default:
                y = '0';
                break;
        }
        return y;
    }
}

int main(){
    int v[3];
    char x[7];
    scanf("%d %d %d", &v[0], &v[1], &v[2]);

    for (int i = 0; i < 3; i+=2){
        x[i] = decToHexChar(v[i] / 16);
        x[i + 1] = decToHexChar(v[i] % 16);
    }

    for (int i = 0; i < strlen(x); i++){
        printf("%c", x[i]);
    }

    return 0;
}