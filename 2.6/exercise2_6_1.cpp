/*
  In a directly connected telephone network, all telephones are connected and don't required 
  a central switchubg station to establish calls between teo telephones, The number of lines 
  needed to maintain a directly connected network for n telephones is given by this formula 
  n*(n-1)/2
*/

#include <iostream>
using namespace std;

int main()
{
    int num,line,addline;
    num = 100;
    addline = 10;

    line = num*(num-1)/2;
    cout << "The total number of lines are required:" << line ;

    num += addline;
    line = num*(num-1)/2;
    cout << "\nThe new total number of lines are required:" << line;
    return 0;
}