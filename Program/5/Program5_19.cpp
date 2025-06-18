#include <iostream>
using namespace std;

int main()
{
    const int MAXI = 4;
    const int MAXJ = 4;
    int i = 1;
    int j = 1;
    for (i = 1; i <= MAXI;i++)
    {
        cout << endl << "i is now " << i << endl;

        for (j = 1;j <= MAXJ; j++)
            cout << "  j = " << j;
        
    } 
    cout << endl;
    return 0;
}