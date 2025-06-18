#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX_CELSIUS = 50;
    const int START_VAL = 5;
    const int STEP_SIZE = 5;
    int celcius;
    double fahren;

    cout << "DEGREE    DEGREES" << endl
         << "CELCIUS   FAHRENHEIT" << endl
         << "-------   ----------" << endl;
    celcius = START_VAL;
    cout << setiosflags(ios::showpoint)
         << setprecision(2);
    while (celcius <= MAX_CELSIUS)
    {
        fahren = (9.0/5.0) * celcius + 32.0;
        cout << setw(4)  << celcius << fixed
             << setw(13) << fahren << endl;
        celcius += STEP_SIZE;
    }
    return 0;
}