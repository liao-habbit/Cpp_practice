#include <iostream>
#include <strstream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXCHARS = 81;
    int units = 10;
    double price = 36.85;
    char buf[MAXCHARS];

    strstream inmem(buf, MAXCHARS, ios::out);
    inmem << "No. of units = " 
          << setw(3) << units 
          << "   Price per unit = $"
          << setw(6) << setprecision(2) << fixed << price << '\0';
    cout << '|' << buf << '|';
    cout << endl;

    return 0;
}