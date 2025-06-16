#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float resist_total, r1, r2, r3;
    r1 = r2 = r3 = 1000;
    resist_total = 1/(1/r1+1/r2+1/r3);
    cout << setw(7) << fixed << setprecision(2)
    << "The combined resistance is " << resist_total << " ohms" << endl;
    return 0;
}