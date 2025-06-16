#include <iostream>
#include <iomanip> // 設定字串格式 需使用 <iomainp>
using namespace std;

int main()
{
    cout << setw(3) << 6 << endl 
         << setw(3) << 18 << endl 
         << setw(3) << 124 << endl 
         << "---\n"
         << (6+18+124) << endl;
    return 0;
}