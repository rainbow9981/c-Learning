//
// Created by 吕允博 on 2021/11/1.
//
#include<iostream>
using namespace std;
int main(){
    int i, score;
    cout << "你考试考了多少分？（0～100）: ";
    cin >> score;
    while(1){
        if(score <= 100 && score >= 0){
            break;
        }
        else{
            cout << "分数值必须在0到100之间！请重新输入：";
            cin >> score;
        }
    }

    i = score / 10;
    switch (i) {
        case 10: case 9:
            cout << "你的成绩是优！";
             break;
        case 8:
            cout << "你的成绩是良！";
        case 7: case 6:
            cout << "你的成绩是中！";
        default:
            cout << "你的成绩是差！";
    }
    return 0;
}
