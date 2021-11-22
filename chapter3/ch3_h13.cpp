//
// Created by 吕允博 on 2021/11/6.
//
#include<iostream>
#include<cmath>
using namespace std;

int fib(int n);

int main(){
    int n, answer;
    cout << "Enter number: ";
    cin >> n;
    cout << "\n\n";
    answer =  fib(n);
    cout << answer << " is the " << n << "th Fibonacci number\n";
}

int fib(int n){
    cout << "Processing fib(" << n << ")...";
    if(n < 3){
        cout << "Return 1!\n";
        return (1);
    }
    else{
        cout << "Call fib(" << n - 2 << ") and fib (" << n - 1 <<").\n";
        return (fib(n-2) + fib(n - 1));
    }
}