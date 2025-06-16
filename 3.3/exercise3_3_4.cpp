#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << setw(10) << fixed << setprecision(6) 
    << "The ESAL value of Lightweight car is " << float(pow(2000./18000.,4)) << endl
    << "The ESAL value of Medium-weight car is " << float(pow(4000./18000.,4)) << endl
    << "The ESAL value of School Bus is " << float(pow(10000./18000.,4)) << endl
    << "The ESAL value of Light delivery truck is " << float(pow(16000./18000.,4)) << endl
    << "The ESAL value of Wrecker truck is " << float(pow(20000./18000.,4)) << endl
    << "The ESAL value of City transit bus is " << float(pow(26000./18000.,4)) << endl
    << "The ESAL value of Beverage delivery bus is " << float(pow(30000./18000.,4)) << endl
    << "The ESAL value of Cement mixer is " << float(pow(40000./18000.,4)) << endl
    << "The ESAL value of Fire truck is " << float(pow(50000./18000.,4)) << endl;
    return 0;
}