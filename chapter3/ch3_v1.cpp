//
// Created by 吕允博 on 2021/11/2.
//
#include<iostream>
using namespace std;

double power(double x, int n){
    double val = 1.0;
    while(n--)
        val *= x;
    return val;
}

int main(){
    cout << "5 to the power 2 is " << power(5, 2) << endl;
    return 0;
}

