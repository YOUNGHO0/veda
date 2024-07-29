//
// Created by lee on 2024. 7. 19..
//

#include <stdio.h>
#define bitSet(x,bit) ((x) |= (1 << (bit)))
#define bitClear(x,bit) ( (x) &= (~(1<<bit)))
#define bitFlip(x,bit)  ( (x) ^= (1<<(bit)))
#define bitIsSet(x,bit) ( (x) &= (1<<bit))

int main() {
    unsigned cnum = 0x16;

    bitSet(cnum,3);
    printf("%x\n", cnum);
    bitClear(cnum,3);
    printf("%x\n",cnum);

    if(bitIsSet(cnum,3)) {
        printf("1\n");

    }
    else {
         printf("0\n");
    }

    return 0;
}