#include <iostream>
using namespace std;
const int MAXELS = 5;     // 設定矩陣指標
int findMax(int[MAXELS]); // 設定函數找最大值

int main()
{
    int nums[MAXELS] = {2,18,1,27,16};
    cout << "The maximum value is " << findMax(nums) << endl;
    return 0;
}

int findMax(int vals[MAXELS])
{
    int i,max = vals[0];
    for (i = 1; i<MAXELS; i++)
        if (max < vals[i]) max = vals[i];
    return max;
}