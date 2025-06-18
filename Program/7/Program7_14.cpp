#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    const int NUMELS = 4;
    int n[] = {136, 122, 109,146};
    int i;

    vector<int> partnums(n,n+NUMELS); // vector <datatype> name (src.begin, src.end 
    cout << endl << "The vector initially has a size of " << int(partnums.size()) << "," << endl
         << " and contains the elements:" << endl;
    for (i = 0; i < int(partnums.size()); i++) // partnums.size() 檢查向量裡面的元素個數
        cout << partnums[i] << "     ";
    
    partnums[3] = 144;
    cout << endl << endl 
         << "After replacing thhe fourth element, the vector has a size of " << int(partnums.size())
         << "," << endl <<" and contains the elements:" << endl;
    for (i = 0; i < int(partnums.size()); i++) // partnums.size() 檢查向量裡面的元素個數
        cout << partnums[i] << "     ";
    
    partnums.insert(partnums.begin()+1,142); // 在原本向量裡面的第2個位置插入142
    cout << endl << endl
         << "After inserting an element into the second position," << endl
         << " the vector hhas a size of " << int(partnums.size()) << "," 
         << " and contains the elements:" << endl;
    for (i = 0; i < int(partnums.size()); i++) // partnums.size() 檢查向量裡面的元素個數
        cout << partnums[i] << "     ";
    
    partnums.push_back(157); // 在原本向量的最後一個位置 加入 157
    cout << endl << endl
         << "After adding an element to the end of the list," << endl
         << " the vector has a size of " << int(partnums.size()) << "," 
         << " and contains the elements:" << endl;
    for (i = 0; i < int(partnums.size()); i++) // partnums.size() 檢查向量裡面的元素個數
        cout << partnums[i] << "     ";
    
    sort(partnums.begin(),partnums.end());
    cout << endl << endl
        << "After sorting, the vector's element are:" << endl;
    for (i = 0; i < int(partnums.size()); i++) // partnums.size() 檢查向量裡面的元素個數
        cout << partnums[i] << "     " ;
    cout << endl;
    return 0;
}


