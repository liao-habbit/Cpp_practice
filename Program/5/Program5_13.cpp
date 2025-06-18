#include <iostream>
using namespace std;

int main()
{
    const int MAXNUMS = 5;
    int i = 1;
    double usenum, posSUM, negSUM;
    posSUM = negSUM = 0 ;
    for (; i <= MAXNUMS; i++)
    {
        cout << "Enter a number (positive or negative) : ";
        cin >> usenum;
        if (usenum > 0)
            posSUM += usenum;
        else
            negSUM += usenum;
    }
    cout << "The positive total is " << posSUM << endl 
         << "The negative total is " << negSUM << endl;
    return 0;
}