#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to Guess the Number!\n";
    cout << "I have selected a number between 1 and 100. Try to guess it.\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        ++attempts;

        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low. Try again.\n";
        }
        else
        {
            cout << "Too high. Try again.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
