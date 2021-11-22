//
// Created by 吕允博 on 2021/11/5.
//
#include<iostream>
using namespace std;

double FtoC(double f){
    return 5.0/9.0*(f - 32);
}

int main(){
    double c, f;
    cout << "Please enter the Fahrenheit thermometer: ";
    cin >> f;
    cout << "The degree centigrade is: " << FtoC(f) << endl;
}
