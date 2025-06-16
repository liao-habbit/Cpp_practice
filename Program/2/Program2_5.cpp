#include <iostream>
using namespace std;

int main()
{
  cout << "\nData Type    Bytes"
			 << "\n----------   -----"
			 << "\nint            " << sizeof(int)
			 << "\nchar           " << sizeof(char)
			 << "\nbool           " << sizeof(bool)
			 << "\nfloat          " << sizeof(float)
			 << "\ndouble         " << sizeof(double)
			 << "\nlong double    " << sizeof(long double)
			 << '\n';

	return 0;
}