#include <iostream>
using namespace std;

int main()
{
    string firstName = "Michael";
    string middleName = "Mason";
    string lastName = "McMillan";
    int age = 53;
    string fullName = firstName + " " + middleName + " " + lastName;

    cout << "Hello, " << firstName << " "
         << middleName << " " << lastName << endl;
    cout << "Hello, " << fullName << endl;
    cout << "You are " << age << " years old." << endl;
    cout << "Next year you will be ";
    cout << age + 1 << " years old." << endl;
    return 0;
}