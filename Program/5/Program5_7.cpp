#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXNUMS = 4;
    int count = 1;
    double num, average;
    double total = 0;

    cout << endl << "This program will ask you to enter " 
    << MAXNUMS << " numbers." << endl;

    while (count <= MAXNUMS)
    {
        cout << "Enter a number: ";
        cin >> num;
        total += num;
        count++;
    }

    count--;
    average = total/ count;
    cout << endl << "The average of the numbers is " << average << endl;
    return 0;
}