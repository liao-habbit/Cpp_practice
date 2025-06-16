#include <iostream>
using namespace std;

int main()
{
    const double LIMIT = 3000.0;
    int idNum;
    double miles;

    cout << "Please type in car number and mileage: ";
    cin >> idNum >> miles;

    if (miles > LIMIT){
        cout << "car " << idNum << " is over the limit." << endl
             << "End of program output." << endl;
    }
    return 0;
}