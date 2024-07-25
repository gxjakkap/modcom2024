#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char m[4][31];
    int p[4] = {0}, q[4] = {0}, t = 0, ti = 0;

    for (int i = 0; i <4; i++){
        scanf("%s", &m[i]);
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < strlen(m[i]); j++){
            if (j == 0){
                m[i][j] = toupper(m[i][j]);
            }
            else {
                m[i][j] = tolower(m[i][j]);
            }
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            if (strcmp(m[j], m[i]) == 0){
                p[i] += 1;
                q[j] += 1;
            }
        }
    }

    for (int i = 0; i < 4; i++){
        p[i] += q[i];
    }

    for (int i = 0; i < 4; i++){
        if (p[i] >= t){
            t = p[i];
            ti = i;
        }
    }

    printf("%s", m[ti]);

    return 0;
}