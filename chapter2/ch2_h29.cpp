//
// Created by 吕允博 on 2021/11/1.
//
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i, j, k, flag;

    /* while way
    i = 2;
    while(i <= 100){
        flag = 1;
        k = sqrt(i);
        j = 2;
        while(j <= k){
            if(i % j == 0){
                flag = 0;
                break;
            }
            j++;
        }
        if(flag)
            cout << i << " " ;
        i++;
    }
    */

    // do-while way
    i = 2;
    do{
        flag = 1;
        k = sqrt(i);
        j = 2;
        do{
            if(i % j == 0){
                flag = 0;
                break;
            }
            j++;
        }while(j <= k);
        if(flag)
            cout << i << " ";
        i++;
    }while(i<=100);

    /* for way
    for(i = 2; i <= 100; i++){
        flag = 1;
        k = sqrt(i);
        for(j = 2; j <= k; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << i << " ";
    }
    */

    return 0;
}