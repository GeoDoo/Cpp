#include <iostream>
#include <cmath>

using namespace std;

int square(int number)
{
    return pow(number, 2);
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;
    
    cout << "The square of " << number << " is: " << square(number) << endl;

    return 0;
}