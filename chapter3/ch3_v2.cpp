//
// Created by 吕允博 on 2021/11/2.
//
#include<iostream>
using namespace std;

double power(double x, int n); //Calculate the power of n

int main(){
    int value = 0;
    cout << "Enter an 8 bit binary number: ";
    for (int i = 7; i >= 0; i--){
        char ch;
        cin >> ch;
        if(ch == '1')
            value += static_cast<int>(power(2,i));
    }
    cout << "decimal value is " << value << endl;
    return 0;
}

double power(double x, int n){
    double val = 1.0;
    while(n--)
        val *= x;
    return val;
}
