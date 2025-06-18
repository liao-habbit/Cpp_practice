#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int num = 1;
    cout << "NUMBER    SQUARE     CUBE" << endl
         << "------    ------     ----" << endl;
    while (num < 11)
    {
        cout << setw(3) << num << "         "
             << setw(3) << pow(num,2) << "      "
             << setw(4) << pow(num,3) << endl;
        num++;
    }
    return 0;
}