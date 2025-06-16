#include <iostream>
using namespace std;

int main()
{
  double force, const_k, charge1, charge2, radius;
  force = const_k * charge1 * charge2 / ( radius * radius );
  cout << "The value of force is " << force << endl;
  return 0; 
}