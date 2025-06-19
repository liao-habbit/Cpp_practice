#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string filename = "/Users/test/Desktop/README.md";
    string descrip;
    double price;
    ifstream infile;

    try
    {
        infile.open(filename.c_str());

        if(infile.fail()) throw filename;
        infile >> descrip >> price;
        while (infile.good())
        {
            cout << descrip << ' ' << price << endl;
            infile >> descrip >> price;
        }
        infile.close();
        return 0;
    }
    
    catch(string e)
    {
        cout << endl << "The file" << e << " was not successfully opened."
             << endl << "Please check that the file currently exists." << endl;
        exit(1);
    }
}