#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double findAvg(int[],int);
double stdDev(int[],int,double);

int main()
{
    const int NUMELS = 10;
    int values[NUMELS] = {98, 82, 67, 54, 78, 83, 95, 76, 68, 63};
    double average, sDev;
    average = findAvg(values,NUMELS);
    sDev = stdDev(values,NUMELS, average);
    cout << "The average of thhe numbers is " << setw(5) << setiosflags(ios::showpoint)
         << setprecision(4) << average << endl
         << "The standard deviation of the numbers is " << sDev << endl;
    return 0;
}

double findAvg(int nums[], int numel)
{
    int i;
    double sumnums = 0.0;
    for (i=0; i < numel; i++)
        sumnums += nums[i];
    return (sumnums/numel);
}

double stdDev(int nums[], int numel, double av)
{
    int i;
    double sumdevs = 0.0;
    for (i=0; i < numel; i++)
        sumdevs += pow(nums[i]-av,2);
    return (sqrt(sumdevs/numel));
}