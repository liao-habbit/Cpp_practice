#include <iostream>
using namespace std;

int main()
{
    const int MAXSTEPS = 5;             // 設定矩陣 指標範圍
    int i, temp[MAXSTEPS];              // 產生矩陣
    for (i=0; i < MAXSTEPS ;i++)
    {
        cout << "Enter a temperature: ";
        cin  >> temp[i];

    }
    cout << endl;

    for (i=0; i < MAXSTEPS ;i++)
        cout << "temperature " << i << " is " << temp[i] << endl;
    
    return 0;
}