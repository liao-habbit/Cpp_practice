#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double num = 1728.896400;
    cout << "The fourth root of " << double(num) << " is " << sqrt(sqrt(num)) <<endl;
    return 0; 
}