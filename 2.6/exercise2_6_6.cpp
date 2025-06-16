#include <iostream>
using namespace std;

int main()
{
    float stress, load, inertia, dist, half_height;
    inertia = 10.67 ;
    half_height = 2.0 ;
    load = 700 ;
    dist = 8*12 ; 
    stress = load * dist * half_height / inertia;
    cout << "The stress on a steel I-beam is: " << stress << " lbs/in2" << endl;

    return 0;
}