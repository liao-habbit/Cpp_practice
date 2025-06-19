#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string filename = "/Users/test/Desktop/README.md";
    ifstream inFile(filename.c_str());
    if (inFile.fail())
    {
        cout << endl << "The file named " << filename 
             << " was not successfully opened" << endl
             << "Please check that the file currently exists." << endl;
        exit(1);
    }
    cout << endl << "The file has been successfully opened for reading." 
         << endl;
    return 0;
}