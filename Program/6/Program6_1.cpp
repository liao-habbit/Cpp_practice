#include <iostream>
using namespace std;

void findMax(int,int);
int main()
{   
    int firstnum, secnum;
    cout << endl << "Enter a number: ";
    cin >> firstnum;
    cout << "Great! Please enter a second number: ";
    cin >> secnum;
    
    findMax(firstnum,secnum);

    return 0;
}