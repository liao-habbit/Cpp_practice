#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string filename =  "/Users/test/Desktop/README.md";
    void inOut(ofstream&);
    ofstream outFile(filename.c_str());
    if (outFile.fail())
    {
        cout << endl << "The file named " << filename 
             << " was not successfully opened" << endl
             << "Please check that the file currently exists." << endl;
        exit(1);
    }
    inOut(outFile);
    return 0;
}

void inOut(ofstream& fileOut)
{
    const int NUMLINES = 5;
    string line;
    int count;
    cout << "Please enter five lines of text:" << endl;
    for (count = 0; count < NUMLINES; count++)
    {
        getline(cin,line);
        fileOut << line << endl;
    }
    cout << endl << "The file has been successfully written." << endl;
    return;
}