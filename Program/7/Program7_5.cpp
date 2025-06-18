#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int rows = 3;
    const int cols = 4;
    int i,j;
    int val[rows][cols] = {8,16,9,52,3,15,27,6,14,25,2,10};
    cout << endl << "Display of multiplied elements";
    for (i = 0; i < rows; i++)
    {
        cout << endl;
        for(j = 0; j < cols; j++)
            cout << setw(5) << (val[i][j]*=10); 
    }
    cout << endl;
}