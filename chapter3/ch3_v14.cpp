//
// Created by 吕允博 on 2021/11/4.
//

#include<iostream>
using namespace std;

const double PI = 3.14159265358979;
inline double calArea(double radius){
    return PI * radius * radius;
}

int main(){
    double r = 3.0;
    double area = calArea(r);
    cout << area << endl;
    return 0;
}