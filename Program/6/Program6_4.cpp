#include <iostream>
using namespace std;

template <class T>  // 設定物件類別
T abs(T value)      // 指定物件類別 T 並回傳類別 T 之變數
{
    T absnum;
    if (value < 0)
        absnum = -value;
    else    
        absnum = value;
    return absnum;
}
int main()
{
    int num1 = -4;
    float num2 = -4.23;
    double num3 = -4.23456;

   cout << "The absolute value of " << num1 << " is " << abs(num1) << endl
        << "The absolute value of " << num2 << " is " << abs(num2) << endl
        << "The absolute value of " << num3 << " is " << abs(num3) << endl;
    return 0;    
}