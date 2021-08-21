#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void buildVector(vector<int> &vector)
{
    srand(time(NULL));

    for (int i = 0; i <= 1000; ++i)
    {
        vector.push_back(rand() % 1000 + 1);
    }
}

int searchVector(vector<int> vector, int value)
{
    for (int i = 0; i < vector.size(); ++i)
    {
        if (vector[i] == value)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> numbers;
    buildVector(numbers);

    int found, item;

    cout << "Enter a value to search for: ";
    cin >> item;

    found = searchVector(numbers, item);

    if (found > -1)
        cout << "Found the item at position: "
             << found << endl;
    else
        cout << "Didn't find item in vector." << endl;

    return 0;
}