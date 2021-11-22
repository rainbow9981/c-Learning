//
// Created by 吕允博 on 2021/11/1.
//
#include<iostream>
using namespace std;
int main(){
    unsigned int x;
    unsigned int y = 100;
    unsigned int z = 50;
    x = y - z;
    cout << "Difference is: " << x << endl;
    x = z - y;  //overflow
    cout << "Now difference is: " << x << endl;
    return 0;
}
