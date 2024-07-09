#include <iostream>
#include <ctime>
using namespace std;
int getUserChoice()
{
    int choice;

    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";

    cin >> choice;
    return choice;
}

int getComputerChoice()
{
    return rand() % 3;
}

void determineWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {

        cout << "It's a tie!\n";
    }
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1))
    {

        cout << "You win!\n";
    }
    else
    {

        cout << "Computer wins!\n";
    }
}

int main()
{ 

    cout << "Welcome to Rock, Paper, Scissors!\n";

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    cout << "You chose ";
    switch (userChoice)
    {
    case 0:

        cout << "Rock";
        break;
    case 1:

        cout << "Paper";
        break;
    case 2:

        cout << "Scissors";
        break;
    default:

        cout << "Invalid choice";
        return 1;
    }

    cout << "\nComputer chose ";
    switch (computerChoice)
    {
    case 0:

        cout << "Rock";
        break;
    case 1:

        cout << "Paper";
        break;
    case 2:

        cout << "Scissors";
        break;
    default:

        cout << "Invalid choice";
        return 1;
    }

    cout << "\n";

    determineWinner(userChoice, computerChoice);

    return 0;
}
