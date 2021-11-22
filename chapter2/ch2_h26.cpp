//
// Created by 吕允博 on 2021/11/1.
//
#include<iostream>
using namespace std;
int main(){
    char flag;
    while(1){
        cout << "现在下雨吗？（Y or N）：";
        cin >> flag;
        if(toupper(flag) == 'Y'){
            cout << "现在正在下雨。";
            break;
        }
        if(toupper(flag) == 'N'){
            cout << "现在没有下雨。";
            break;
        }
        //cout << endl;
    }
    return 0;
}
