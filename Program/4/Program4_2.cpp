#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char tempType;
    double temp, fahren, celsius;

    cout << "Enter the temperature to be converted: ";
    cin >> temp;
    cout << "Enter an f if the temperature is in Fahrenheit" << endl
         << "or a c if the temperature is in Celsius: ";
    cin >> tempType;

    cout << setiosflags(ios::fixed) 
         << setiosflags(ios::showpoint)
         << setprecision(2);
    
    if (tempType == 'f')
    {
        celsius = (5.0/9.0) *(temp-32.0);
        cout << endl << "The equivalent Celsisus temperature is " 
             << celsius << endl;
    }
    else
    {
        fahren = (9.0/5.0) * temp + 32.0;
        cout << endl << "The equivalent Fahrenheit temperature is "
             << fahren << endl;
    }
    return 0;
}