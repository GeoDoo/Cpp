#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi = 3.14159265;
    double area;
    int radius = 3;
    area = pi * pow(radius, 2);
    cout << "The area of a circle with radius " << radius << " is " << area << endl;

    cout << sqrt(144) << endl;

    cout << abs(1345) << " " << abs(-1345) << endl;

    cout << fmod(234.23, 3) << endl;

    return 0;
}