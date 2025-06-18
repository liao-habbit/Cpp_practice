#include <iostream>
using namespace std;

int main()
{
    const int MAXSTEPS = 5;
    int i, temp[MAXSTEPS],total = 0;
    for (i=0; i < MAXSTEPS ;i++)
    {
        cout << "Enter a temperature: ";
        cin  >> temp[i];
    }
    cout << endl << "The total of the tmeprature";
    for (i=0; i < MAXSTEPS ;i++)
    {
        cout << " " << temp[i];
        total += temp[i];
    }
    
    cout << " is " << total << endl;
    return 0;
}