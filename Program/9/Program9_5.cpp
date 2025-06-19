#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string fileone = "/Users/test/Desktop/info.txt";
    string filetwo = "/Users/test/Desktop/info.bak";
    char ch;
    ifstream infile;
    ofstream outfile;
    try
    {
        infile.open(fileone.c_str());
        if (infile.fail()) throw fileone;
    }
    catch(string in)
    {
        cout << "The input file " << in 
             << " was not successfully opened." << endl
             << "No backup was made." << endl;
        exit(1);
    }
    try
    {
        outfile.open(filetwo.c_str());
        if (outfile.fail()) throw filetwo;
        while((ch = infile.get())!=EOF)
            outfile.put(ch);
        infile.close();
        outfile.close();
    }
    
    catch(string out)
    {
        cout << "The backup file " << out 
             << " was not successfully opened." << endl;
        exit(1);
    }
    cout << "A successful backup of " << fileone 
         << " named " << filetwo << " was successfully made." << endl;
    return 0;
}