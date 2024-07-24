#include <stdio.h>
#include <stdbool.h>

int main() {
    // ไม่มีพยานยืนยันตัวตน
    bool a = false;
    // พบหลักฐานในที่พักของผู้ต้องสงสัย
    bool e = true;

    //กำหนดว่าบุคคลนั้นอาจเป็นผู้ต้องสงสัยหรือไม่

    printf("alibi: %s\n", a ? "yes" : "no");
    printf("evidence found: %s\n", e ? "yes" : "no");
    printf("suspected: %s\n", (!a && e) ? "yes" : "no");

    return 0;
}