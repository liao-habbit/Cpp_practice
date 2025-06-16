#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    float dist;
    x1 = -12;
    x2 = 22;
    y1 = -15;
    y2 = 5;
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout << "The distance between (-12,-15) to (22,5) is " << dist << endl;
    return 0;
}