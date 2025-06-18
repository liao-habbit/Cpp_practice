#include <iostream>
using namespace std;

void calc(double, double, double, double&, double&);

int main()
{
    double fnum, snum, tnum, sum, product;
    cout << "Enter three numbers: ";
    cin >> fnum >> snum >> tnum;
    calc(fnum,snum,tnum,sum,product);
    cout << endl << "The sum of the numbers is: " << sum << endl;
    cout << "The product of the numbers is: " << product << endl;

    return 0;
}

void calc(double num1, double num2 , double num3, double& total, double& product)
{
    total = num1 + num2 + num3;
    product = num1 * num2 * num3;
    return;
}