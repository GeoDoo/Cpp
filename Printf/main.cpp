#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double pi = 3.14159265;
    printf("%f\n", pi);
    printf("%10f\n", pi);
    printf("%10.8f\n", pi);

    int number = 100;
    printf("%d\n", number);
    printf("%15d\n", number);
    printf("%+10d\n", number);

    printf("%s\n", "Hello, world!");

    return 0;
}