#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, disc, root1, root2;
    cout << "This program calculates the roots of a" << endl
         << "quadratic equation of the form" << endl
         << "  2" << endl
         << "ax + bx + c = 0 " << endl << endl
         << "Please enter values for a,b and c: ";
    cin >> a >> b >> c;

    if (a == 0.0 && b == 0.0)
        cout << "The equation is degenerate and has no roots." << endl;
    else if (a == 0.0)
        cout << "The equation is has the single root x = " << -c/b << endl;
    else 
    { 
        disc = pow(b,2.0) - 4 * a * c;
        if (disc > 0.0)
        {
            disc = sqrt(disc);
            root1 = (-b + disc)/(2 * a);
            root2 = (-b - disc)/(2 * a);
            cout << "The two real roots are " 
                 << root1 << " and " << root2 << endl; 
        }
        else if (disc < 0.0)
            cout << "Both roots are imaginary." << endl;
        else
            cout << "Both roots are equal to " << -b/(2 * a) << endl;
    }   
    return 0;
}