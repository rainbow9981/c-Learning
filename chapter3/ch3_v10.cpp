//
// Created by 吕允博 on 2021/11/3.
//
#include<iostream>
using namespace std;


//将src针的最上面一个盘子移动到dest针上
void move(char src, char dest){
    cout << src << " --> " << dest << endl;
}

void hanoi(int n, char src, char medium, char dest){
    int count = 0;
    if(n == 1)
        move(src, dest);
    else{
        hanoi(n - 1, src, dest, medium);        //关注参数的变化
        move(src, dest);
        hanoi(n - 1, medium, src, dest);
    }
    count++;
    cout << "times" << count << endl;
}

int main(){
    int m, x;
    cout << "Enter the number of disks: ";
    cin >> m;
    cout << "The steps to moving " << m << " disks: " << endl;
    hanoi(m, 'A', 'B', 'C');
    return 0;

}