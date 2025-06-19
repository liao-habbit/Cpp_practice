/*
    線性搜尋：
        依照清單裡面的順序依序搜尋
        終止條件：
            1. 找到搜尋項目
            2. 到清單的最後一個元素 
    優點：
        1. 並不需要事先排序清單
        2. 如果尋找的物件在清單的前面，運算速度較快
    缺點：
        1. 如果尋找的物件在清單的後面，運算速度較慢
    
    ** 平均需要比較的步驟數 為 n/2 
    時間複雜度： O(n)
    pesudo code
    對所有清單的元素
        與搜尋項目逐一比較
        if 搜尋項目被找到
            return 目前項目的指標
        endif 
    end for 
    return -1 如果沒有找到
*/

#include <iostream>
using namespace std;

int linearsearch(int [], int, int);

int main() 
{
    const int NUMEL = 10;
    int nums[NUMEL] = {5,10,22,32,45,67,73,98,99,101};
    int item, location;

    cout << "Enter the item you are searching for: ";
    cin >> item;

    location = linearsearch(nums, NUMEL,item);
    if (location > -1)
        cout << "The item was found at index location " << location << endl;
    else
        cout << "The item was not found in the list" << endl;
    return 0;
}

int linearsearch(int list[], int size, int key)
{
    int i;
    for(i = 0 ; i < size ; i++)
    {
        if (list[i] == key) return i;
    }
    return -1;
}
