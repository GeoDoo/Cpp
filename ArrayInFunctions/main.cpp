#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void buildArray(int arr[], int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
        arr[i] = rand() % 100 + 1;
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    const int size = 10;
    int grades[size];

    buildArray(grades, size);
    displayArray(grades, size);

    cout << endl;

    return 0;
}