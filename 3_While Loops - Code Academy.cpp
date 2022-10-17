#include <iostream>

using namespace std;

int main()
{
    int guess;

    int tries = 0;

    cout << "I have a number 1-10." << endl;
    cout << "Please guess it: ";
    cin >> guess;

    while (guess != 8 && tries < 50)

    cout << "Wrong guess, try again: ";
    cin >> guess;

    tries++;

    return 0;
}
