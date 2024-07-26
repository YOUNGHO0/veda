//
// Created by lee on 2024. 7. 24..
//

#include "Random.h"
#include <cstdlib>
#include <ctime>

Random::Random(){
    srand(time(NULL));
}

int Random::next() {
    return rand();
}

int Random::nextInRange(int n, int m) {
    return n + rand()%(m-n);
}
