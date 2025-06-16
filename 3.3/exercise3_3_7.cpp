#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float init, remain, time;
    init = 250.;
    time = 275.;
    remain = init*exp(-0.00012 * time);
    cout << "Weight of remaining materials is " << remain << " grams"<< endl;
    return 0;
}