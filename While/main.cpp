#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    while (count < 10)
    {
        cout << "Hi!" << endl;
        ++count;
    }

    double balance, rate;
    int years, count1;

    cout << "What is the starting balance? ";
    cin >> balance;
    cout << "What is the annual interest rate? ";
    cin >> rate;
    cout << "How many years to calculate interest? ";
    cin >> years;
    count1 = 1;

    while (count1 <= years)
    {
        balance *= rate;
        cout << count1 << ": " << balance << endl;
        ++count1;
    }

    cout << "After " << years << " years, your balance will be "
         << balance << "." << endl;

    int grade, gradeTotal, numGrades;
    double average;
    numGrades = gradeTotal = 0;

    cout << "Enter a grade: ";
    cin >> grade;

    while (grade != -1)
    {
        gradeTotal += grade;
        ++numGrades;

        cout << "Enter a grade: ";
        cin >> grade;
    }

    average = gradeTotal / numGrades;
    cout << "The average grade is : " << average << endl;

    double balance, rate;
    int years, target;
    years = 0;

    cout << "What is the beginning balance? ";
    cin >> balance;
    cout << "What is the annual interest rate? ";
    cin >> rate;
    cout << "What is the target balance? ";
    cin >> target;

    while (balance < target)
    {
        balance *= rate;
        ++years;
    }

    cout << "It will take " << years
         << " years to reach the target balance "
         << "of " << target << "." << endl;

    return 0;
}