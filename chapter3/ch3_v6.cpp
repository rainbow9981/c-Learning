//
// Created by 吕允博 on 2021/11/3.
//
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

enum GameStatus{WIN, LOSE, PLAYING};

int rollDice(){
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "Player rolled " << die1 << "+" << die2 << "=" << sum << "." << endl;
    return sum;
}

int main(){
    int sum, myPoint;
    GameStatus status;
    unsigned seed;

    int rollDice();
    cout << "Please enter an unsigned integer: ";
    cin >> seed;        //输入随即种子
    srand(seed);        //将种子传递给rand()
    sum = rollDice();   //第一轮投骰子、计算和数

    switch(sum){
        case 7:
        case 11:
            status = WIN;
            break;
        case 2:
        case 3:
        case 12:
            status = LOSE;
            break;
        default:
            status = PLAYING;
            myPoint = sum;
            cout << "point is " << myPoint << endl;
            break;
    }

    int count = 1;
    while(status == PLAYING){   //只要状态位PLAYING，继续
        sum = rollDice();
        if(sum == myPoint)      //某轮的和数等于点数则取胜
            status = WIN;
        else if(sum == 7)       //出现和数为7则为负
            status = LOSE;
        //cout << "myPoint is " << sum << ", in round" << count << endl;
        count++;
        cout << "round " << count << endl;
    }

    //当状态不为PLAYING时循环结束，输出游戏结果
    if(status == WIN)
        cout << "Player wins." << endl;
    else
        cout << "Player loses." << endl;
    return 0;
}



/* test for display all answers "in main"
    int count = 0;
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            count++;
            cout << setw(4) << i << "," << j << " " << i + j ;
        }
        cout << endl;
    }
    cout << "count = " << count << endl;
    return 0;
    */