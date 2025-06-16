#include <iostream>
using namespace std;

int main()
{
  float hforce, massflow, velocity;
  massflow = 2.3;
  velocity = 4.25;
  hforce = massflow * velocity;
  cout << "The horizontal force, in Newtons, is " << hforce << endl;
  return 0;
}