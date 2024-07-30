//
// Created by lee on 2024. 7. 30..
//

#include <string>
#include <iostream>
#include <map>
using namespace std;
class Person {
public:
    std::string name;
    int music;
    int art;
    int physics;
    Person();
    Person(std::string name, int music, int art, int physics);
};

Person::Person() {
}

Person::Person(std::string name, int music, int art, int physics): name(name), music(music), art(art), physics(physics) {


}


int main() {
    int score;
    int music;
    int art;
    int physics;
    string name;
    map<string,Person> myMap;
    for(int i =0; i<3; i++) {


        cout << "이름 입력" << endl;
        cin >> name;
        cout << "음악 성적 입력 :"<<endl;
        cin>> music;
        cout << "미술 성적 입력" << endl;
        cin >> art;
        cout << "체육 성적 입력 " << endl;
        cin >> physics;

        Person p(name,music,art,physics);

        myMap.insert({name,p});


    }

    myMap.insert()

    cout << "이름입력 " << endl;
    cin >> name;
    if(myMap.find(name) == myMap.end()) {
        cout << "없음" << endl;
    }
    else {
        for(auto i : myMap) {
            cout << i.first << " " << i.second.music << " " << i.second.art << " " << i.second.physics << " " << endl;
         }
    }







}
