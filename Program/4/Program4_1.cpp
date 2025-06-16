#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius;
    cout << "Please type in the radius: ";
    cin >> radius;

    if (radius < 0.0)
        cout << "A negative radius is invalid" << endl;
    else  
        cout << "The area of this circle is " << 3.1416 * pow(radius,2) << endl;
    
    return 0;
}