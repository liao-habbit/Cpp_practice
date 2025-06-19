#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Counting the number of vowels";
    int i, numchars;
    int vowelcount = 0;
    cout << "The string: " << str << endl;
    numchars = int(str.length());
    for (i = 0; i < numchars; i++)
    {
        switch (str.at(i))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowelcount++;
        }
    }
    cout << "has " << vowelcount << " vowels." << endl;
    return 0;
}