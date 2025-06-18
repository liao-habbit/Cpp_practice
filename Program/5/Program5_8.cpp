#include <iostream>
using namespace std;

int main()
{
    const int HIGHGRADE = 100;
    double grade, total;
    grade = total = 0;
    cout << endl << "To stop entering grades, type in any number"
         << endl << "greater than 100" << endl << endl;
    while (grade <= HIGHGRADE)
    {
        total += grade;
        cout << "Enter a grade: ";
        cin >> grade;
    }
    cout << endl << "The total of the grade is " << total << endl;
    return 0;
}