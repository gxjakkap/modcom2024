#include <stdio.h>
#include <string.h>

int main(){
    char c[100], k[100];
    //char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char a[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    scanf("%s", &c);
    scanf("%s", &k);

    for (int i = 0; i < strlen(c); i++){
        int j;
        if (c[i] == '.') break;
        for(j = 0; j<strlen(k); j++){
            if(c[i]==k[j]){
                break;
            }
        }
        printf("%c", a[j]);
    }

    return 0;
}