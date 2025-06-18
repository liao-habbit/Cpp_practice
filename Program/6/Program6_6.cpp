#include <iostream>
using namespace std;

float tempvert(float);

int main()
{
    const int CONVERT =4;
    int count;
    float fahren;
    for (count = 1; count <= CONVERT ; count++)
        {
            cout << endl << "Enter a Fahrenheit temperature: ";
            cin >> fahren;
            cout << "The Celsius equivalent is " << tempvert(fahren) << endl;
        }
    return 0;
}

float tempvert(float fahren)
{
    return (5.0/9.0)*(fahren -32.0);
}
