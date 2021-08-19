#include <iostream>

using namespace std;

double fahrenheitToCelcius(double temperature)
{
    return (temperature - 32.0) * (5.0 / 9.0);
}

double celciusToFahrenheit(double temperature)
{
    return (temperature * (9.0 / 5.0)) + 32.0;
}

int main()
{
    double fahrenheit, celcius;

    cout << "Enter a fahrenheit temperature: ";
    cin >> fahrenheit;

    celcius = fahrenheitToCelcius(fahrenheit);

    cout << fahrenheit << " fahrenheit is equal to "
         << celcius << " celcius." << endl;

    double fahrenheit2, celcius2;

    cout << "Enter a celcius temperature: ";
    cin >> celcius2;

    fahrenheit2 = celciusToFahrenheit(celcius2);

    cout << celcius2 << " celcius is equal to "
         << fahrenheit2 << " fahrenheit." << endl;

    return 0;
}