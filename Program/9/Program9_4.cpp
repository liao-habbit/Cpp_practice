#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    char response;
    string filename = "/Users/test/Desktop/READE.md";
    ifstream infile;
    ofstream outfile;
    try
    {
        infile.open(filename.c_str());
        if(infile.fail()) throw 1;
        cout << "A file by the name " << filename << " currently exists." << endl
             << "Do you want to overwrite it with the new data (y or n): ";
        cin >> response;
        if (tolower(response) =='n')
        {
            infile.close();
            cout << "The existing file has not been overwritten." << endl;
            exit(1);
        }
    }
    
    catch(int e)
    {}
    try
    {
        outfile.open(filename.c_str());
        if(outfile.fail()) throw filename;
        outfile << fixed << showpoint << setprecision(2)
                << "Mats " << 39.95 << endl
                << "Bulbs " << 3.22 << endl
                << "Fuses " << 1.08 << endl;
        outfile.close();
        cout << "The file " << filename << " has been successfully written" 
             << endl;
    }
    catch(string e)
    {
        cout << "The file " << filename 
             << " was not opened for output and has not been written." << endl;
    }
}