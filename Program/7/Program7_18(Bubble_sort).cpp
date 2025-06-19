#include <iostream>
using namespace std;

int bubble_sort(int [],int);
int main()
{
    const int NUMEL = 10;
    int nums[NUMEL] = {5,10,22,32,45,67,73,98,99,101};
    int i, moves;
    moves = bubble_sort(nums,NUMEL);
    cout << "The sorted list, in ascending order, is:" << endl;
    for (i = 0; i < NUMEL;++i)
        cout << " " << nums[i];
    cout << endl << moves << " moves were made to sort this list" << endl;
    return 0;
}

int bubble_sort(int num[], int numel)
{
    int i, j, temp, moves = 0;
    for (i = 0; i < (numel - 1); i++)
    {
        for (j = 1; j < numel; j++)
        {
          if (num[j]< num[j-1])
          {
            temp = num[j];
            num[j] = num[j-1];
            num[j-1] = temp;
            moves++; 
          } 
        }
    }
    return moves;
}