#include <iostream>
#include <string>
#include <map>

using namespace  std;
int main() {

    map<string,string> dic;

    dic.insert({"love", "���"});
    dic.insert(make_pair("apple","���"));
    dic["cherry"] = "ü��";
    cout << "����� �ܾ� ���� " << dic.size() << endl;

    string eng;

    while(true) {
        cout << "ã����� �ܾ� "<<  endl;
        getline(cin, eng);
        if(eng == "exit")
            break;
        if(dic.find(eng) == dic.end())
            cout << "����" << endl;
        else
            cout << dic[eng] << endl;

        map<string,string> ::iterator it;
        for(it = dic.begin(); it != dic.end(); it++) {
            cout << it->first << ", "<< it->second << endl;
        }

    }
    cout << "�����մϴ� "<< endl;

}
