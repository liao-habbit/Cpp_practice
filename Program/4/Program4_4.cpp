#include <iostream>
using namespace std;

int main()
{
    int age = 18;
    cout << "The value of the first expression is " << (age+5) << endl
         << "The value of the second expression is " << (age = 30) << endl
         << "The value of the third expression is " << (age == 40) << endl;
    return 0;
}