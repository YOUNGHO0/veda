//
// Created by lee on 2024. 7. 30..
//

#include "MyRandom.h"



#include "MyRandom.h"

MyRandom::MyRandom() {
    // Use the current time to seed the random number generator
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    generator.seed(seed);
}

int MyRandom::getRandomNumber(int from, int to) {
    std::uniform_int_distribution<int> distribution(from, to);
    return distribution(generator);
}