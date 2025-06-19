/*
    二元搜尋：
        比較中間的物件是否 大於 等於 小於 搜尋物件
        終止條件：
            1. 中間的物件等於搜尋物件
            2. 中間的物件不等於搜尋物件 回傳 -1
    優點：
        如果清單的元素數量大於50時，二元搜尋會比線性搜尋的速度快很多
    缺點：
        需要事先排序清單
    時間複雜度： O(log_2 n)
        
    
    ** 平均需要比較的步驟數 為 n/2 

    pesudo code
    設定起始位置為 清單的第一個位置
    設定終止位置為 清單的最後一個位置
    開始比較物件
    while 目標物件 大於 或 等於 或 小於 搜尋物件
        決定中間物件的指標數值
      if 目標物件 與 中間物件
        if 目標物件 等於 中間物件
            return 回傳目標物件的指標數值
        if 目標物件 小於 中間物件
            return 將中間物件的指標數值 設定成終止位置
        if 目標物件 大於 中間物件
            return 將中間物件的指標數值 設定成起始位置
      endif
    endwhile
    return -1 沒有找到搜尋物件
*/

#include <iostream>
using namespace std;

int binarysearch(int [], int, int);

int main()
{
    const int NUMEL = 10;
    int nums[NUMEL] = {5,10,22,32,45,67,73,98,99,101};
    int item, location;
    cout << "Enter the item you are searching for: ";
    cin >> item;

    location = binarysearch(nums, NUMEL, item);
    if (location > -1)
        cout << "The item was found at index location " << location << endl;
    else
        cout << "The item was not found in the list" << endl;
    return 0;
}

int binarysearch(int list[], int size, int key)
{
    int left, right, mid;
    left = 0;
    right = size -1 ;
    while (left <= right)
    {
        mid = int ((left+right)/2);
        if (key == list[mid])
        {
            return mid;
        }
        else if (key > list[mid])
            left = mid + 1;
        else 
            right = mid - 1;
    }
    return -1;
}