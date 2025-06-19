#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message;
    cout << "Enter a string:" << endl;
    getline(cin,message);
    cout << "The string just entered is:" 
         << endl << message 
         << endl;
    return 0;
}