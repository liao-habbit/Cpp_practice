#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int x,y;
    cout << "x value   y value" << endl
         << "-------   -------" << endl;
    for (x = 2 ; x <= 6 ; x++)
    {
        y = 10 * pow(x,2) + 3 * x - 2;
        cout << setw(4) << x 
             << setw(11) << y << endl;
    }
    return 0;
}