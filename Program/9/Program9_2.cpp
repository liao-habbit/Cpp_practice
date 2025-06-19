#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator;
    bool needdenominator = true;
    cout << "Enter the numerator (whole number only): ";
    cin >> numerator;
    cout << "Enter the denominator (whole number only): ";
    while(needdenominator)
    {
        cin >> denominator;
        try
        {
            if (denominator == 0)
                throw denominator;
        }
        catch(int e)
        {
            cout << "A denominator value of " << e << " is invalid." << endl;
            cout << "Please re-enter the denominator (whole number only): ";
            continue;
        }
        cout << numerator << '/' << denominator
             << " = " << float(numerator)/float(denominator) << endl;   
        needdenominator = false;
    }
    return 0;
}