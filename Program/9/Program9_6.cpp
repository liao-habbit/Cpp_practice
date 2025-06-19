#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2("Good Morning");
    string str3 = "Hot dog";
    string str4(str3);
    string str5(str4,4);
    string str6 = "linear";
    string str7(str6,3,3);

    cout << "str1 is: " << str1 << endl
         << "str2 is: " << str2 << endl
         << "str3 is: " << str3 << endl
         << "str4 is: " << str4 << endl
         << "str5 is: " << str5 << endl
         << "str6 is: " << str6 << endl
         << "str7 is: " << str7 << endl;

    return 0;
}