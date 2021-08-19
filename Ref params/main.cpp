#include <iostream>

using namespace std;

// passing by reference changes the values of the variables
void swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1, num2;
    num1 = 13;
    num2 = 12;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    swap(num1, num2);

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}