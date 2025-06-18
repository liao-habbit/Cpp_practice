#include <iostream>
using namespace std;

void findMax(int,int); // 需要先宣告函數的形式 以及回傳值

int main()
{
    int fnum,snum;
    cout << endl << "Enter a number: ";
    cin >> fnum;
    cout << "Great! Please enter a second number: ";
    cin >> snum;

    findMax(fnum,snum);
    return 0;
}

void findMax(int x,int y) // 括弧內要決定函數的變數名稱
{
    int maxnum;
    if (x >= y)
        maxnum = x;
    else 
        maxnum = y;

    cout << endl << "The maximum of the two number is " << maxnum << endl;
    return;
}