#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str = "This -123/ is 567 A ?<6245> Test!";
    char nextchar;
    int i;
    int numLetters = 0, numDigits = 0, numOthers = 0;

    cout << "The original string is: " << str << endl
         << "This string contains " << int(str.length())
         << " characters," << " which consist of" << endl;
    
    for (i = 0; i < int(str.length()); i++)
    {
        nextchar = str.at(i);
        if (isalpha(nextchar))
            numLetters++;
        else if (isdigit(nextchar))
            numDigits++;
        else
            numOthers++;
    }
    cout << "      " << numLetters << " letters" << endl
         << "      " << numDigits << " digits" << endl
         << "      " << numOthers << " other characters." << endl;
    cin.ignore();
    return 0;
}