#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 11; ++i)
    {
        cout << i << " ";
    }

    cout << endl;

    double balance, rate;
    int years;

    cout << "What is the beginning balance? ";
    cin >> balance;
    cout << "What is the annual interest rate? ";
    cin >> rate;
    cout << "How many years to calculate? ";
    cin >> years;

    for (int i = 1; i <= years; ++i)
    {
        balance *= rate;
        cout << i << ": " << balance << endl;
    }

    cout << "After " << years << " years, your balance will be "
         << balance << "." << endl;

    return 0;
}