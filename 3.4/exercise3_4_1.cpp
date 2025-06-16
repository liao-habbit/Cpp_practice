#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r1,r2 ,m1;
    float m2;
    cout << "Enter the mass supported by the first piston (kg):";
    cin >> m1;
    cout << "Enter the radius of the first piston(cm):";
    cin >> r1;
    cout << "Enter the radius of the second piston(cm):";
    cin >> r2;
    m2 = pow(r2,2)/pow(r1,2)*m1;
    cout << "The mass supported by the second piston is: " << m2 << " kg" << endl;
    return 0;
}