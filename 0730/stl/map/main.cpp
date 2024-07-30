#include <iostream>
#include <string>
#include <map>

using namespace  std;
int main() {

    map<string,string> dic;

    dic.insert({"love", "사랑"});
    dic.insert(make_pair("apple","사과"));
    dic["cherry"] = "체리";
    cout << "저장된 단어 갯수 " << dic.size() << endl;

    string eng;

    while(true) {
        cout << "찾고싶은 단어 "<<  endl;
        getline(cin, eng);
        if(eng == "exit")
            break;
        if(dic.find(eng) == dic.end())
            cout << "없음" << endl;
        else
            cout << dic[eng] << endl;

        map<string,string> ::iterator it;
        for(it = dic.begin(); it != dic.end(); it++) {
            cout << it->first << ", "<< it->second << endl;
        }

    }
    cout << "종료합니다 "<< endl;

}
