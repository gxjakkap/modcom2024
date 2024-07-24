#include <stdio.h>
#include <stdbool.h>

char ptf(bool x){
    return x ? 'T' : 'F';
}

int main() {
    bool p = true, w = false, b = true, f = false;
    // พบลายนิ้วมือ
    // ไม่พบอาวุธ
    // พบคราบเลือด
    // ไม่พบรอยเท้า

    printf("investigation results:\n");
    printf("fingerprints found = %c\n", ptf(p));
    printf("weapon found = %c\n", ptf(w));
    printf("blood found = %c\n", ptf(b));
    printf("footprints found = %c\n", ptf(f));
    
    //นำหลักฐานมารวมกัน    
    printf("total evidence = %d\n", p+w+b+f);

    return 0;
}