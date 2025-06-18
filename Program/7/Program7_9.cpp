#include <iostream>
using namespace std;
// issue
/*
Program7_9.cpp:9:61: error: cast from pointer to smaller type 'int' loses information
    cout << "The starting address of the arr array is: " << int (&arr[0]) << endl;
                                                            ^~~~~~~~~~~~
Program7_9.cpp:11:55: error: cast from pointer to smaller type 'int' loses information
    cout << "The address of element number 5 is: " << int(&arr[5]) << endl;
                                                      ^~~~~~~~~~~
Program7_9.cpp:13:57: error: cast from pointer to smaller type 'int' loses information
         << "displayed using the notation arr, is: " << int (arr)<< endl;
                                                        ^~~~~~~~
3 errors generated.
*/
/*
int main()
{
    const int NUMELS = 20;
    int arr[NUMELS];

    cout << "The starting address of the arr array is: " << int (&arr[0]) << endl;
    cout << "The storage size of each array element is: " << sizeof(int) << endl;
    cout << "The address of element number 5 is: " << int(&arr[5]) << endl;
    cout << "The staring address of the array, " << endl 
         << "displayed using the notation arr, is: " << int (arr)<< endl;
    return 0;
}
*/
// 改善方法 by GPT

int main()
{
    const int NUMELS = 20;
    int arr[NUMELS];

    cout << "The starting address of the arr array is: " << &arr[0] << endl;
    cout << "The storage size of each array element is: " << sizeof(int) << endl;
    cout << "The address of element number 5 is: "   << &arr[5] << endl;
    cout << "The staring address of the array, " << endl 
         << "displayed using the notation arr, is: " << arr << endl;
    return 0;
}