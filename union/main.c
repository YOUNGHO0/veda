#include <stdio.h>

int main(void) {

    union iptype {
        unsigned int addr;
        unsigned char ip[4];

    } ipaddr;

    ipaddr.addr = 0xc0480a17;
    printf("%d %d %d %d\n", ipaddr.ip[0], ipaddr.ip[1], ipaddr.ip[2], ipaddr.ip[3]);


    return 0;
}
