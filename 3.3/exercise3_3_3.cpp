#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float degree, speed, height;
    degree = 45./180.;
    speed = 1609.*7./3600.;
    height = 0.5 * pow(speed,2) * pow(sin(degree),2) / 9.8;
    cout << "The maximum height is " << double(height) << endl;
    return 0;
}