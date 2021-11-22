//
// Created by 吕允博 on 2021/11/3.
//
#include<iostream>
using namespace std;

int f(int a,int b){
    if(a<b)
        return f((b-a),a);
    else if(a == b)
        return 2 * a;
    else
        return f(f(a/2,b),f(b,b%2));
}

int main(){
    int x;
    x = f(3, 5);
    cout << x;
    return 0;
}
