#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream inFile("/Users/test/Desktop/README.md");
    ofstream outFile("/Users/test/Desktop/README.md");
    
    char response;
    if(!inFile.fail())
    {
        cout << "A file by the name README.md exists" << endl
             << "Do you wnat to continue and overwrite it" << endl
             << "with the new data (y or n): ";
        cin >> response;
        if (tolower(response) == 'n')
        {
            cout << "The existing file will not be overwritten." << endl;
            exit(1);
        }
    }
    

    if (inFile.fail())
    {
        cout << endl << "The file was not successfully opened"
             << endl;
        exit(1);
    }

    cout << "The file has been successfully opened for output." << endl;
 
    return 0;
}