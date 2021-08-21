#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void displayVector(vector<int> vector)
{
    for (int i = 0; i < vector.size(); ++i)
    {
        cout << vector[i] << " ";
    }
}

int main()
{
    vector<int> numbers;

    srand(time(NULL));

    int number;

    for (int i = 1; i <= 100; ++i)
    {
        number = rand() % 100 + 1;
        numbers.push_back(number);
    }

    displayVector(numbers);

    cout << endl;

    return 0;
}