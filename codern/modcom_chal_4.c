#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char a[100], b[100];
    scanf("%d", &n);
    while(n > 0){
        a[0] = '\0';
        b[0] = '\0';
        scanf("%s", a);
        for(int i = 0; i < strlen(a); i++){
            b[i] = a[strlen(a) - i - 1];
        }
        b[strlen(a) -1] = '\0';
        if (strcmp(a, b) == 0){
            printf("yes");
            if (n != 1) printf("\n");
        }
        else {
            printf("no");
            if (n != 1) printf("\n");
        }
        n--;
    }
    return 0;
}