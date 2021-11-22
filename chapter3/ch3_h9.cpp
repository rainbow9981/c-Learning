//
// Created by 吕允博 on 2021/11/5.
//
#include<iostream>
#include<cmath>
using namespace std;

int prime(int i);

int main(){
    int i;
    /*
    cout << "请输入一个整数：";
    cin >> i;
    if(prime(i))
        cout << i << "是质数." << endl;
    else
        cout << i << "不是质数." << endl;
    */

    for(int m = 2; m <= 100; m++){
        if(prime(m))
            cout << m << " ";
    }

    return 0;
}

int prime(int i){
    int j, k, flag;
    flag = 1;
    k = sqrt(i);
    for(j = 2; j <= k; j++){
        if(i % j == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

