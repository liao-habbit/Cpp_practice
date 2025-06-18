#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXNUMS = 4;
    int count;
    double num;
    cout << "This program will ask you to enter " << MAXNUMS << " numbers." << endl;
    count = 1;
    while (count <= MAXNUMS)
    {
        cout << endl << "Enter a number: " ;
        cin >> num;
        cout << "The number entered is " << num;
        count++;
    }
    cout << endl;

    return 0;
}