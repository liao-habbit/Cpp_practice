#include <iostream>
using namespace std;

int main()
{
    char code;
    cout << "Enter a specification code: ";
    cin >> code;

    if (code == 'S')
        cout << "The item is space exploration grade.";
    else if (code == 'M')
        cout << "The item is military grade.";
    else if (code == 'C')
        cout << "The item is commertial grade.";
    else if (code == 'T')
        cout << "The item is toy grade.";
    else
        cout << "An invalid code was entered.";
    cout << endl;

    return 0;
}