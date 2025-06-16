#include <iostream>
using namespace std;

int main()
{
    int digout;
    double inlbs;

    cout << "Enter the input weight: ";
    cin >> inlbs;
    
    if (inlbs >= 90)
        digout = 1111;
    else if (inlbs >=80)
        digout = 1110;
    else if (inlbs >=70)
        digout = 1101;
    else if (inlbs >=60)
         digout = 1100;
    else 
         digout = 1011;

    cout << "The digital output is " << digout << endl;

    return 0;
}