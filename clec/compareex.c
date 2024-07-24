#include <stdio.h>
#include <stdbool.h>

int main() {
    // time unit: min in 1 day
    int suspectLeftHome = 1170;  // เวลาที่ผู้ต้องสงสัยออกจากบ้าน (19:30)
    int crimeTime = 1215;        // เวลาที่เกิดเหตุ (20:15)
    int travelTime = 30;         // เวลาเดินทางจากบ้านไปที่เกิดเหตุ (30 นาที)

    int suspectArrivalTime = suspectLeftHome + travelTime;

    printf("suspect leave: %d:%02d\n", suspectLeftHome/60, suspectLeftHome%60);
    printf("incident time: %d:%02d\n", crimeTime/60, crimeTime%60);
    printf("ptto for suspect: %d:%02d\n", suspectArrivalTime/60, suspectArrivalTime%60);

    
    printf("suspect can commit: %s\n",  (suspectArrivalTime < crimeTime) ? "yes" : "no");

    return 0;
}