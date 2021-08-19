#include <iostream>

using namespace std;

bool isEven(int number)
{
    return number % 2 == 0;
}

bool isVowel(char letter)
{
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        return true;

    return false;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num))
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
    
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    if (isVowel(letter))
        cout << letter << " is a vowel." << endl;
    else
        cout << letter << " is a consonant." << endl;

    return 0;
}