#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string filename =  "/Users/test/Desktop/README.md";
    string descrip;
    double price;

    ifstream inFile(filename.c_str());
    if (inFile.fail())
    {
        cout << endl << "The file was not successfully opened"
             << endl << "Please check that the file currently exists."
             << endl ;
        exit(1);
    }

    inFile >> descrip >> price;
    while (inFile.good())
    {
        cout << descrip << ' ' << price << endl;
        inFile >> descrip >> price;
    }
    inFile.close();
    return 0;
}