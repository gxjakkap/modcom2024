#include <stdio.h>

int main() {
    int ab, bc, ca, tab, tbc, tca;
    // ระยะทางจากจุดที่ 1 ถึงจุดที่ 2 (กิโลเมตร)
    scanf("%d", &ab);
    // ระยะทางจากจุดที่ 2 ถึงจุดที่ 3 (กิโลเมตร)
    scanf("%d", &bc);
    // ระยะทางจากจุดที่ 3 กลับไปจุดที่ 1 (กิโลเมตร)
    scanf("%d", &ca);
    
    // เวลาที่ใช้ระหว่างจุดที่ 1 และ 2 (นาที)
    scanf("%d", &tab);
    // เวลาที่ใช้ระหว่างจุดที่ 2 และ 3 (นาที)
    scanf("%d", &tbc);
    // เวลาที่ใช้ระหว่างจุดที่ 3 และ 1 (นาที)
    scanf("%d", &tca);


    //หาระยะทางรวม
    int sd = ab + bc + ca;
    //หาเวลารวม
    int st = tab + tbc + tca;
    float th = st / 60.0;  
    //หาความเร็วเฉลี่ย
    float v = sd / th;

    printf("sum distance: %d km\n", sd);
    printf("time: %.1f h\n", th);
    printf("avg velocity: %.2f km/h\n", v);

    return 0;
}