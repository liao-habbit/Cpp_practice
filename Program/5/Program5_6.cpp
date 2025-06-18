#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXNUMS = 4;
    int count = 1;
    double num;
    double total = 0;

    cout << endl << "This program will ask you to enter " 
    << MAXNUMS << " numbers." << endl;

    while (count <= MAXNUMS)
    {
        cout << endl << "Enter a number: ";
        cin >> num;
        total += num;
        cout << "The total is now " << setprecision(7) << total;
        count++;
    }
    cout << endl << "The final total is " << setprecision(7) << total << endl;
    
    return 0;
}