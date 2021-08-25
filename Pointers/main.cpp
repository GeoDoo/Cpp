#include <iostream>

using namespace std;

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = num1;
}

int main()
{
    int number = 1;
    int *ptrNumber = &number;
    int *ptrNumber1 = ptrNumber;

    cout << ptrNumber << endl;
    cout << *ptrNumber << endl;
    cout << ptrNumber1 << endl;
    cout << *ptrNumber1 << endl;

    string name;
    string *ptrName = &name;

    cout << ptrName << endl;
    cout << *ptrName << endl;

    return 0;
}