#include <iostream>
#include <string>
using namespace std;



int main()
{
    int i;
    string str;
    cout << "Type in any sequence of characters: ";
    getline(cin,str);
    for (i = 0; i < int(str.length());i++)
        str[i] = toupper(str[i]);
    
    cout << "The character just entered, in upperclass, are: "
         << str << endl;
    cin.ignore();
    return 0;
}