//
// Created by lee on 2024. 7. 26..
//

#include <iostream>
#include <string>

using namespace std;

void star(int a = 5);
void msg(int id, string text = "");


void star(int a){

    for(int i =0; i<a; i++){
    cout << '*' ;
    cout <<endl;
    }
}

void msg(int id, string text){
cout <<id << ' ' << text << endl;
}

int main(){

   star();
   star(10);

   msg(10);
   msg(10,"hello");
    return 0;
}