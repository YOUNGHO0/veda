//
// Created by lee on 2024. 7. 26..
//

#include "ColorPoint.h"


using namespace  std;

Colorpoint::Colorpoint(): Point(10,20) {
   cout << "파생 클래스 생성자 호출"<<endl;
    this->color = "yellow";
}

void Colorpoint::setColor(std::string color) { this-> color = color;}

void Colorpoint::showColorPoint() {
    cout << color << ": ";
    showPoint();
}

Colorpoint::~Colorpoint() {
    cout << "color Point 삭제 "<< endl;
}

bool Colorpoint::equals(Colorpoint p) {
    Colorpoint mine = *this;
    if(mine.x == p.y && mine.y == p.y) return true;
    return false;

}



