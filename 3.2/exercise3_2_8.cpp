#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x1,x2,y1,y2;
    x1 = 3;
    x2 = 8;
    y1 = 7;
    y2 = 12;
    cout << "The value of the slope is " 
    << setw(6) << fixed << setprecision(2)
    <<((y2-y1)/(x2-x1)) << endl;
    return 0; 
}