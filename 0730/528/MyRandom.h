// MyRandom.h
#ifndef MYRANDOM_H
#define MYRANDOM_H

#include <random>
#include <chrono>

class MyRandom {
private:
    std::default_random_engine generator;

public:
    MyRandom();
    int getRandomNumber(int from, int to);
};

#endif // MYRANDOM_H
