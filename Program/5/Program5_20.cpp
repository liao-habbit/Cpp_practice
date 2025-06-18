#include <iostream>
using namespace std;

int main()
{
    const int NUMGRADES = 4;
    const int NUMSTUDENTS = 20;
    int i = 1;
    int j = 1;
    double grade, total, average;

    for (i = 1;i <= NUMSTUDENTS;i++)
    {    
        total = 0;
        for(j = 1;j <= NUMGRADES; j++)
        {
            cout << "Enter an examination grade for this student: ";
            cin >> grade;
            total += grade;
        }
        average = total / NUMGRADES;
        cout << endl << "The average for student " << i << " is "
        << average << endl << endl;
    }
    return 0;
}