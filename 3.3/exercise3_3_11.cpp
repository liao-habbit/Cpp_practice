#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float population;
    int year = 2019;
    population = 6.0 * exp(0.02*(year-2000));
    cout << "Estimation of the worldwide population in the year 2012 is " << population 
    << " billions of people"<< endl;
    return 0;
}