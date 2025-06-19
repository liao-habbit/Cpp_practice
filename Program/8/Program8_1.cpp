#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("/Users/test/Desktop/README.md");
    if (inFile.fail())
    {
        cout << endl << "The file was not successfully opened"
             << endl << "Please check that the file currently exists."
             << endl ;
        exit(1);
    }
    cout << endl << "The file has been successfully opened for reading."
         << endl;
    return 0;
}