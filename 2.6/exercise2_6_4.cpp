#include <iostream>
using namespace std;

int main()
{
  double speed, fe, fr;
  fe = 2e10;
  speed = 7.5e1;
  fr = (-1.0 + speed/6.685e8)/(speed/6.685e8-1.0)*fe;
  cout << "The returned frequency corresponding to 75 mph is " << fr << endl;
  return 0;
}