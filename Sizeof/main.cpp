#include <iostream>

using namespace std;

int main()
{
    cout << "The size of an integer is " << sizeof(int) << " bytes." << endl;
    cout << "The size of a double is " << sizeof(double) << " bytes." << endl;
    cout << "The size of a string is " << sizeof(string) << " bytes." << endl;

    int num = 1234;
    int *pnum = &num;

    cout << "The size of pointer pnum is " << sizeof(pnum) << " bytes." << endl;
    cout << "The size of the value of pointer pnum is " << sizeof(*pnum) << " bytes." << endl;

    int numbers[] = {5, 10, 15, 20};
    int size = sizeof(numbers) / sizeof(*numbers);

    cout << "The size of numbers is " << sizeof(numbers) << " bytes." << endl;
    cout << "The size of first element of numbers is " << sizeof(*numbers) << " bytes." << endl;

    return 0;
}