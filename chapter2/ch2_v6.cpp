//
// Created by 吕允博 on 2021/10/29.
//
#include<iostream>
using namespace std;
int main(){
    int a, b ,x;

    cout << "input value of a: ";
    cin >> a;

    cout << "input value of b: ";
    cin >> b;

    x = (a-b)>0 ? (a-b) : (b-a);
    cout << "The difference of a and b is: " << x << endl;

    return 0;
}
