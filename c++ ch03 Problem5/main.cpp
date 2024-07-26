#include <iostream>

#include "Random.h"


int main() {

    Random r;
    std::cout << "--0 에서 " << RAND_MAX << " 까지의 랜덤 정수 10개" << std::endl;
    for(int i =0; i<10; i++) {
        int n = r.next();
        std::cout << n << ' ';
    }
    std::cout << std::endl << std::endl << "--2에서 " << " 4 까지의 랜덤 정수 10개 --" <<std::endl;
    for(int i =0;i<10; i++) {
        int n = r.nextInRange(2,4);
        std::cout << n << ' ';
    }
    std::cout << std::endl;
}
