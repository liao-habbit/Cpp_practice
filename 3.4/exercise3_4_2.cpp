#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r1,r2 ,f1;
    float f2;
    cout << "Enter the force applied to the first piston (N):";
    cin >> f1;
    cout << "Enter the radius of the first piston(cm):";
    cin >> r1;
    cout << "Enter the radius of the second piston(cm):";
    cin >> r2;
    f2 = pow(r2,2)/pow(r1,2)*f1;
    cout << "The force applied to the second piston is: " << f2 << " N" << endl;
    return 0;
}