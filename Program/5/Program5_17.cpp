#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    const int NUMBERS = 10;
    double randvalue;
    int i = 1;
    srand(time(NULL));            // 隨機設置亂數種子
    for (; i <= NUMBERS; i++)
    {
        randvalue = rand();       // 取亂數
        cout << randvalue << endl;  
    }
    return 0;
}