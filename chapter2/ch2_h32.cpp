//
// Created by 吕允博 on 2021/11/1.
//
#include<iostream>
using namespace std;

int main(){
    int n = 18;
    int m = 0;
    /* while way
    while(m != n){
        cout << "请猜出这个数是多少？（0～100）：";
        cin >> m;
        if(n > m)
            cout << "你猜小了。" << endl;
        else if(n < m)
            cout << "你猜大了。" << endl;
        else
            cout << "你猜对了！" << endl;
    }*/

    //do-while way
    do{
        cout << "请猜出这个数是多少？（0～100）：";
        cin >> m;
        if(n > m)
            cout << "你猜小了。" << endl;
        else if(n < m)
            cout << "你猜大了。" << endl;
        else
            cout << "你猜对了！" << endl;
    }while(m != n);
}
