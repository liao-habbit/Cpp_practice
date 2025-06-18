#include <iostream>
using namespace std;

int main()
{
    const int MAXCOUNT = 4;
    int count = 0;
    double num, total, average;
    total = 0.0;
    for (; count < MAXCOUNT; count++)
    {
        cout << "Enter a number:5 ";
        cin >> num;
        total += num;
    }
    average = total / MAXCOUNT;
    cout << "The average of the data entered is " << average << endl;
    return 0;
}