
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void buildVector(vector<int> &vector, int numItems)
{
    srand(time(NULL));

    for (int i = 0; i <= numItems; ++i)
    {
        vector.push_back(rand() % 1000 + 1);
    }
}

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
    buildVector(numbers, 10);
    displayVector(numbers);

    cout << endl;

    sort(numbers.begin(), numbers.end());
    displayVector(numbers);

    cout << endl;

    return 0;
}
