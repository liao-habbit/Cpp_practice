#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1 = "Hello";
    string string2 = "Hello there";
    cout << "string1 is the string: " << string1 << endl
         << "The number of characters in string1 is "
         << int(string1.length()) << endl << endl
         << "string2 is the string: " << string2 << endl
         << "The number of characters in string2 is "
         << int(string2.length()) << endl << endl;
    if (string1 < string2){
        cout << string1 << " is less than " << string2 << endl << endl;
    }
    else if (string1 == string2){
        cout << string1 << " is equal to " << string2 << endl << endl;
    }
    else{
         cout << string1 << " is greater than " << string2 << endl << endl;
    }
    string1 += " there world!";
    cout << "After concatenation, string1 contains the characters: " << string1 << endl
         << "The length of this string is " << int(string1.length()) << endl;
    return 0;
}
