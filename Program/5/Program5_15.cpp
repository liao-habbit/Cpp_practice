#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x,y;
    cout << "x value       y value" << endl
         << "-------       -------" << endl
         << setiosflags(ios::fixed)
         << setiosflags(ios::showpoint)
         << setprecision(5);
    for (x = 2.0 ; x <= 6 ; x+= 0.5)
    {
        y = 10.0 * pow(x,2.0) + 3.0 * x - 2.0;
        cout << setw(7) << x 
             << setw(14) << y << endl;
    }
    return 0;
}