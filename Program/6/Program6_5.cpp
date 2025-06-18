#include <iostream>
using namespace std;

int findMax(int,int);

int main()
{
    int fnum, snum, max;
    cout << endl << "Enter a number: ";
    cin >> fnum;
    cout << "Great! Please enter a second number: ";
    cin >> snum;
    max = findMax(fnum,snum);
    cout << endl << "The maximum of thw two number is " << max << endl;
    return 0;
}

int findMax(int x, int y)
{
    int maxnum;
    if(x >= y)
        maxnum = x;
    else 
        maxnum = y;
    return maxnum;
}