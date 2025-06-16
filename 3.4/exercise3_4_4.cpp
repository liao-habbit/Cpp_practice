#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,x,value;
    cout << "Enter the coefficient of the x-squared term: ";
    cin >> a;
    cout << "Enter the coefficient of x term: ";
    cin >> b; 
    cout << "Enter the coefficent of constant term: ";
    cin >> c;
    cout << "Enter the value of x: ";
    cin >> x;
    value = a*pow(x,2)+b*x+c;
    cout << "The polynomial Value is: " << value << endl;
    return 0;
}