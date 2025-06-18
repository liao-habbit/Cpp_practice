#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    const int MAXCOUNT = 5;
    int count = 1;
    cout << "NUMBER     SQUARE ROOT" << endl 
         << "------     -----------" << endl
         << setiosflags(ios::showpoint);
    for (; count <= MAXCOUNT; count++)
        cout << setw(4) << count
             << setw(15) << sqrt(double(count)) << endl;
    return 0;
}