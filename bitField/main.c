#include <stdio.h>



int main(void) {


    struct bit {
        unsigned char b1: 4;
        unsigned char b2: 2;

    } ch ;

    printf("size : %d\n", sizeof(ch));
    ch.b1 = 0x0f;
    ch.b2 = 0x01;

    printf("ch.b1 : %d  ch.b2 : %d\n", ch.b1,ch.b2);


    return 0;
}
