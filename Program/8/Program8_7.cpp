#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string filename =  "/Users/test/Desktop/README.md"; // 打開之檔名
    char ch;
    long offset, last;
    ifstream inFile(filename.c_str());                  // 讀檔
    if (inFile.fail())
    {
        cout << endl << "The file was not successfully opened"
             << endl << "Please check that the file currently exists."
             << endl ;
        exit(1);
    }
    inFile.seekg(0L,ios::end);                          // 從檔案最後一個位置開始
    last = inFile.tellg();                              // 回傳檔案最後一個位置

    for (offset = 1L; offset <= last;offset++)
        {
            inFile.seekg(-offset,ios::end);             // 將文字由後往前傳
            ch = inFile.get();
            cout << ch << " : ";
        }
    inFile.close();
    cout << endl;
    return 0;
}