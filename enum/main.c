#include <stdio.h>

enum season { SPRING, SUMMER , FALL , WINTER};

int main(void) {


    enum season ss;
    char *pc = NULL;

    ss = SPRING;
    switch (ss) {


        case SPRING:
            pc = "test";
            break;
        case SUMMER:
            pc = "inline";
            break;
        case FALL:
            pc = "trip";
            break;
        case WINTER:
            pc = "skiing";
            break;
    }

    printf("%s", pc);
}
