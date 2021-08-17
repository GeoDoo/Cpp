#include <iostream>
using namespace std;

int main()
{
    int hourWorked;
    double rate, grossPay;

    cout << "Enter the hours worked: ";
    cin >> hourWorked;
    cout << "Enter the rate of pay: ";
    cin >> rate;

    if (hourWorked <= 40)
    {
        grossPay = hourWorked * rate;
    }
    else
    {
        grossPay = (40 * rate) + ((hourWorked - 40) * (rate * 1.5));
    }

    cout << "Gross pay is: " << grossPay << endl;

    return 0;
}