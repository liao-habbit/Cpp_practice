#include <iostream>
using namespace std;

void swap(double&, double&);
int main()
{
    double fnum = 20.5 , snum = 60.5;
    cout << "The value stored in fnum is " << fnum << endl
         << "The value stored in snum is " << snum << endl << endl;
    swap(fnum,snum);
    cout << "The value stored in fnum is now: " << fnum << endl
         << "The value stored in snum is now: " << snum << endl;

    return 0;
}

void swap(double& num1, double& num2)
{
    double temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    return;
}