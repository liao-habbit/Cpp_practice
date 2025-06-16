#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    cout << "The decimal (base10) value of 15 is " << 15 << endl;
    cout << "The octal (base8) value of 15 is " 
    << showbase << oct << 15 << endl;
    cout << "The hexadecimal (base16) value of 15 is "  
    << showbase << hex << 15 << endl;
    return 0;
}