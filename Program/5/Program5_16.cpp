#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int num = 1 ,final;
    cout << "Enter the final number for the table: ";
    cin >> final;
    cout << "NUMBER SQUARE CUBE" << endl
         << "------ ------ ----" << endl;

    for ( ; num <= final ; num++)
    {
        cout << setw(3) << num
             << setw(8) << pow(num,2)
             << setw(7) << pow(num,3) << endl;
    }
    return 0;
}