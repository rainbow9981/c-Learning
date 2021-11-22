//
// Created by 吕允博 on 2021/11/1.
//
#include<iostream>
using namespace std;
enum Weekday{SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main(){
    int i;
    Weekday d = THURSDAY;
    cout << "d=" << d << endl;  // d=4
    i = d;
    cout << "i=" << i << endl;  //i=4

    d = (Weekday) 6;
    cout << "d=" << d << endl;  //d=6
    d = Weekday(4);
    cout << "d=" << d << endl;  //d=4
    return 0;
}

