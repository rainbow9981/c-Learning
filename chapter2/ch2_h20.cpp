//
// Created by 吕允博 on 2021/11/1.
//
#include<iostream>
using namespace std;
int main(){
    int myAge = 39;
    int yourAge = 39;
    cout << "I am: " << myAge << " years old." << endl;
    cout << "You are: " << yourAge << " years old." << endl;

    myAge++;
    ++yourAge;

    cout << "One year passes..." << endl;
    cout << "I am: " << myAge << " years old." << endl;
    cout << "You are: " << yourAge << " years old." << endl;

    cout << "Another year passes." << endl;
    cout << "I am: " << myAge++ << " years old." << endl;
    cout << "You are: " << ++yourAge << " years old." << endl;

    cout << "Let's print it again." << endl;
    cout << "I am: " << myAge << " years old." << endl;
    cout << "You are: " << yourAge << " years old." << endl;

    return 0;
}

