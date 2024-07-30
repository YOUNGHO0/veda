#include <iostream>
#include <map>

#include "myRandom.h"

using namespace std;

int main()
{

    map<string,string> myMap;

    myMap.insert({"대한민국","서울"});
    myMap.insert({"미국", "워싱턴"});
    myMap.insert({"일본", "도쿄"});
    myMap.insert({"중국", "베이징"});

    myMap.insert({"프랑스","파리"});
    myMap.insert({"독일", "베를린"});
    myMap.insert({"영국", "런던"});
    myMap.insert({"캐나다", "오타와"});

    myMap.insert({"호주","캔버라"});
    myMap.insert({"브라질", "브라질리아"});


    vector<pair<string, string>> mapVector(myMap.begin(), myMap.end());

    // 랜덤 번호 생성 (0 ~ 9)
    MyRandom random;
    int randomNumber = random.getRandomNumber(0, mapVector.size() - 1);


    cout << "Index " << randomNumber << ": " << mapVector[randomNumber].first << " - " << mapVector[randomNumber].second << endl;


    string answer;
    cout << mapVector[randomNumber].first << "의 수도 입력" << endl;
    cin >> answer;
    if(answer== mapVector[randomNumber].second) cout << "정답";
    else cout << "틀림";


}
