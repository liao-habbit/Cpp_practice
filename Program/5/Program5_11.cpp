#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int MAXNUMS = 10;
    int num = 1;
    cout << "NUMBER    SQUARE    CUBE" << endl
         << "------    ------    ----" << endl;
    for (; num <= MAXNUMS; num++ )
    {
        cout << setw(3) << num << "         "
             << setw(3) << pow(num,2) << "     "
             << setw(4) << pow(num,3) << endl;
    }
    return 0;
}