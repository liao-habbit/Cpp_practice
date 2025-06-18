#include <iostream>
#include <iomanip>
using namespace std;
const int rows = 3;
const int cols = 4;
void display(int[rows][cols]);

int main()
{
    int i,j;
    int val[rows][cols] = {8,16,9,52,3,15,27,6,14,25,2,10};
    display(val);
    return 0;
}
void display(int nums[rows][cols])
{
    int i,j;
    for (i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            cout << setw(4) << nums[i][j]; 
        cout << endl;
    }
    return;
}