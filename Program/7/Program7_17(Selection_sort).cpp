/*
    選擇排序
        選擇清單裡面最小的數值，放到清單最前面
        最佳情況：數值由小到大排序 
        最糟情況：數值由大到小排序
*/
#include <iostream>
using namespace std;

int selection_sort(int [],int);

int main()
{
    const int NUMEL = 10;
    int nums[NUMEL] = {5,10,22,32,45,67,73,98,99,101};
    int i, moves;
    moves = selection_sort(nums,NUMEL);
    cout << "The sorted list, in ascending order, is: " << endl;
    for (i = 0; i < NUMEL; i++)
        cout << "  " << nums[i];
    cout << endl << moves << " moves were made to sort this list" << endl;
    return 0; 
}

int selection_sort(int num[], int numel)
{
    int i, j, min, minidx, temp, moves=0;
    for (i = 0; i < (numel-1); i++)
    {
        min = num[i];
        minidx = i;
        for (j = i + 1 ;j < (numel-1); j++)
        {
            if (num[j] < min)
            {
                min = num[j];
                minidx = j;
            }
        }
        if (min < num[j])
        {
            temp = num[i];
            num[i] = min;
            num[minidx] = temp;
            moves++;
        }
    }
    return moves;
}