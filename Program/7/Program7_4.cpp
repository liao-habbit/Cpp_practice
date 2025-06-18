#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int rows = 3;
    const int cols = 4;
    int i,j;
    int val[rows][cols] = {8,16,9,52,3,15,27,6,14,25,2,10};
    cout << endl << "Display of val array by exlplicit element"
         << endl << setw(4) << val[0][0] << setw(4) << val[0][1]
         << setw(4) << val[0][2] << setw(4) << val[0][3] << endl 
         << setw(4) << val[1][0] << setw(4) << val[1][1]
         << setw(4) << val[1][2] << setw(4) << val[1][3] << endl 
         << setw(4) << val[2][0] << setw(4) << val[2][1]
         << setw(4) << val[2][2] << setw(4) << val[2][3] << endl << endl
         << "Display of val array using a nested for loop";
    for (i = 0; i < rows; i++)
    {
        cout << endl;
        for(j = 0; j < cols; j++)
            cout << setw(4) << val[i][j]; 
    }
    cout << endl;
    return 0;
}