#include <iostream>
using namespace std;
template <class T>   
void newval(double&,double&);

int main()
{
    double fnum, snum;

    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << endl << "The value in the first num is: " << fnum << endl
         << "The value in secnum is: " << snum << endl << endl;
    newval(fnum,snum); // 將數值傳遞至newval
    cout << "The value in firstnum is now: " << fnum << endl
         << "The value in secnum is niw: " << snum << endl;

    return 0;
}

void newval(double& xnum, double& ynum) //xnum, ynum 會是 fnum 以及 snum
{
    cout << "The value in xnum is: " << xnum << endl
         << "The value in ynum is: " << ynum << endl << endl;
    xnum = 89.5;
    ynum = 99.5;
    return; // 將 xnum, ynum 數值 回傳至 fnum,
}
