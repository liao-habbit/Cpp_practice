#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float moment, dist, weight, length;
    dist= 1.2;
    weight = 1.3;
    length = 11.2;
    moment = dist * weight * (length - dist) / length;
    cout << "The maximum bending moment is "
    << setw(7) << fixed << setprecision(2)
    << moment << endl;
    return 0;
}