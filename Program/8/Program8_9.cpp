#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int getOpen(ofstream&);
void inOut(ofstream&);

int main()
{
    ofstream outFile;
    getOpen(outFile);
    inOut(outFile);
    return 0;
}

int getOpen(ofstream& fileOut)
{
    string name;
    cout << endl << "Enter a file name: ";
    getline(cin,name);                              // 讀取名稱
    fileOut.open(name.c_str());                     // 開啟檔案
    if (fileOut.fail())
    {
        cout << "Cannot open the file" << endl;
        exit(1);
    }
    else 
        return 1;
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