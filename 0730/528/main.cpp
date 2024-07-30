#include <iostream>
#include <map>

#include "myRandom.h"

using namespace std;

int main()
{

    map<string,string> myMap;

    myMap.insert({"���ѹα�","����"});
    myMap.insert({"�̱�", "������"});
    myMap.insert({"�Ϻ�", "����"});
    myMap.insert({"�߱�", "����¡"});

    myMap.insert({"������","�ĸ�"});
    myMap.insert({"����", "������"});
    myMap.insert({"����", "����"});
    myMap.insert({"ĳ����", "��Ÿ��"});

    myMap.insert({"ȣ��","ĵ����"});
    myMap.insert({"�����", "���������"});


    vector<pair<string, string>> mapVector(myMap.begin(), myMap.end());

    // ���� ��ȣ ���� (0 ~ 9)
    MyRandom random;
    int randomNumber = random.getRandomNumber(0, mapVector.size() - 1);


    cout << "Index " << randomNumber << ": " << mapVector[randomNumber].first << " - " << mapVector[randomNumber].second << endl;


    string answer;
    cout << mapVector[randomNumber].first << "�� ���� �Է�" << endl;
    cin >> answer;
    if(answer== mapVector[randomNumber].second) cout << "����";
    else cout << "Ʋ��";


}
