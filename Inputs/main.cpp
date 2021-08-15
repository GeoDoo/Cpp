#include <iostream>
using namespace std;

int main()
{
    int number ;
    cin >> number;
    cout << number;
    cout << endl;

    int number1, number2;
    cin >> number1 >> number2;
    cout << "number1: " << number1 << "number 2: " << number2 << endl;
    cout << endl;

    int n1, n2, result;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    result = n1 + n2;
    cout << n1 << " + " << n2 << " = " << result << endl;
    cout << endl;
 
    return 0;
}