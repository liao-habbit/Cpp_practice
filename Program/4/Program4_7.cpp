#include <iostream>
using namespace std;

int main()
{
    int opselect;
    double fnum, snum;

    cout << "Please type in two numbers: ";
    cin >> fnum >> snum;
    cout << "Enter a select code: " << endl
         << "1 for addtion" << endl
         << "2 for multiplication" << endl
         << "3 for division : " << endl;
    cin >> opselect;

    switch (opselect)
    {
    case 1:
        cout << "The sum of the numbers is " << fnum+snum;
        break;
    case 2:
        cout << "The product of the numbers is " << fnum*snum;
        break;
    case 3: 
        cout << "The first number divided by the second is " << fnum/snum;
        break;
    default:
        break;
    }
    cout << endl;
    return 0;
}