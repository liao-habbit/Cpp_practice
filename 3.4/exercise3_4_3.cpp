#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float miles, gallons, mpg, km, liters, km_l;
    
    cout << "Enter the miles driven: ";
    cin >> miles;
    cout << "Enter thhe gallons of gas used: ";
    cin >> gallons;
    km = miles * 1.609344;
    liters = gallons * 3.78541178;
    mpg = miles / gallons;
    km_l = km / liters;
    cout << setw(7) << fixed << setprecision(3) 
         << "miles per gallon is " << mpg << endl
         << "Km driven is: " << km << endl
         << "Liters used is: " << liters << endl
         << "km per liter is: " << km_l << endl;
    return 0;
}