#include <iostream>
using namespace std; // 設定矩陣指標

int findMax(int[],int);
int main()
{
    const int MAXELS = 5;
    int nums[MAXELS] = {2,18,1,27,16};
    cout << "The maximum value is " << findMax(nums,MAXELS) << endl;
    return 0;
}

int  findMax(int vals[],int numels)
{
    int i,max = vals[0];
    for (i = 1; i< numels; i++)
        if (max < vals[i]) max = vals[i];
    return max;
}