#include <iostream>

using namespace std;

int main()
{
    const int size = 4;
    int numbers[size] = {5, 10, 15, 20};

    for (int i = 0; i < size; ++i)
        cout << *(numbers + i) << " ";

    cout << endl;

    return 0;
}