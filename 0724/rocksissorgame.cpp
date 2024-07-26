//
// Created by lee on 2024. 7. 24..
//

#include <cstdlib>
#include <ctime>
#include <iostream>
enum choice {
    SISSOR,
    ROCK,
    PAPER,
};

int main() {
    srand(time(NULL));
    int computerChoice = rand()%3;
    computerChoice = 2;
    int userInput;
    std::cout << "가위바위보 입력"<< std::endl;

    std::cin >> userInput;
    if(computerChoice == userInput) std::cout << "비겼습니다" << std::endl;
    else if(computerChoice < userInput && userInput - computerChoice == 1) {
        std::cout << "이겼습니다" << std::endl;
    }
    else if( computerChoice == PAPER  && userInput == 0) std::cout << "이겼습니다 " << std::endl;
    else {
        std::cout << "졌습니다" << std::endl;
    }

}