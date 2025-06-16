#include <iostream>
using namespace std;

int main()
{
    float Celsius,Fahrenheit;
    Fahrenheit = 86.5;
    Celsius = 5.0/9.0*(Fahrenheit-32.0);
    cout << "For a Fahrenheit temperature of " << Fahrenheit << " degrees," << endl
         << "   the equivalent Celsius temperature is " << Celsius << " degrees." << endl;
    
    return 0;
}