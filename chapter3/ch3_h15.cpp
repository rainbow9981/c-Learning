//
// Created by 吕允博 on 2021/11/6.
//

#include<iostream>
#include<cmath>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main(){
    int iNumber, power;
    double dNumber;
    int iAnswer;
    double dAnswer;
    cout << "Enter an int base number: ";
    cin >> iNumber;
    cout << "Enter an double base number: ";
    cin >> dNumber;
    cout << "To what Power?";
    cin >> power;
    iAnswer = getPower(iNumber, power);
    dAnswer = getPower(dNumber, power);
    cout << iNumber << "to the " << power << "the power is " << iAnswer << endl;
    cout << dNumber << "to the " << power << "the power is " << dAnswer << endl;
    return 0;
}

int getPower(int x, int y){
    if(y == 1)
        return x;
    else if(y == 0)
        return 1;
    else if(y < 0)
        return 0;
    else
        return (x * getPower(x, y = 1));
}
double getPower(double x, int y){
    if(y == 1)
        return x;
    else if(y == 0)
        return 1;
    else if(y < 0)
        return 1 / getPower(x, -y);
    else
        return (x * getPower(x, y = 1));
}