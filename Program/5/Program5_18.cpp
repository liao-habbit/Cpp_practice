#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    const int NUMTOTOSSES = 1000;
    int heads = 0;
    int tails = 0;
    int i = 1;
    double flip, perheads, pertails;
    srand(time(NULL));
    for (; i <= NUMTOTOSSES; i++)
    {
        flip = double(rand())/RAND_MAX;  // 取亂數之後將數值範圍設定成 0~1之間
        if (flip > 0.5)
            heads++;
        else
            tails++;
    }
    perheads = (heads/double(NUMTOTOSSES))*100.0; // 將 範圍 0~1 轉換成 0~100
    pertails = (tails/double(NUMTOTOSSES))*100.0;
    cout << endl << "Heads camp up " << perheads << " percent of the time"
         << endl << "Tails came up " << pertails << " percent of the time"
         << endl;
    return 0;
}