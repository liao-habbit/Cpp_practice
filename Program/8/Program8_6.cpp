#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string filename =  "/Users/test/Desktop/README.md";
    string line;
    ifstream inFile(filename.c_str());
    
    if (inFile.fail())
    {
        cout << endl << "The file was not successfully opened"
             << endl << "Please check that the file currently exists."
             << endl ;
        exit(1);
    }
    while(getline(inFile,line))
        cout << line << endl;
    inFile.close();
    return 0;
}
