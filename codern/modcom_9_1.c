#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int timeToMin(char x[6]){
    int t = 0;
    t += (x[0] - '0') * 10 * 60;
    t += (x[1] - '0') * 60;
    t += (x[3] - '0') * 10;
    t += (x[4] - '0');
    return t;
}

int main(){
    int k, cs, ce, ttl = 0;
    int tme[10];
    char inc[11][150], out[11][150], dat[11][150];
    char vn[11], cd[11], ct[6];

    scanf("%d", &k);

    for(int i = 0; i<k; i++){
        char tt[6];
        scanf("%s", inc[i]);
        scanf("%s", out[i]);
        scanf("%s", dat[i]);
        scanf("%s", tt);
        tme[i] = timeToMin(tt);
    }

    scanf("%s", vn);
    scanf("%s", cd);
    scanf("%s", ct);
    cs = timeToMin(ct);
    scanf("%s", ct);
    ce = timeToMin(ct);

    printf("Suspect who called the victim at the incident time:\n");
    for (int i = 0; i < k; i++){
        if (strcmp(inc[i], vn) == 0){
            if (strcmp(dat[i], cd) == 0){
                if ((cs <= tme[i]) && (tme[i] <= ce)){
                    printf("Incoming: %s, Outgoing: %s, Date: %s, Time: %02d:%02d\n", inc[i], out[i], dat[i], tme[i]/60, tme[i]%60);
                    ttl += 1;
                }
            }
        }
        else if (strcmp(out[i], vn) == 0){
            if (strcmp(dat[i], cd) == 0){
                if ((cs <= tme[i]) && (tme[i] <= ce)){
                    printf("Incoming: %s, Outgoing: %s, Date: %s, Time: %02d:%02d\n", inc[i], out[i], dat[i], tme[i]/60, tme[i]%60);
                    ttl += 1;
                }
            }
        }

        
    }
    if (ttl == 0){
        printf("none");
    }

    return 0;
}