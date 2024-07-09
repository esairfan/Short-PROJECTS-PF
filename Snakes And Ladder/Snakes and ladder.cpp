#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

const int rows = 10;
const int cols = 10;

void grid();
void displayingOfplayersCharacters(int player1count, int player2Count);
void playersTurn(int &playerturn);
void randomdice(int &player1Count, int &player2Count, int &playerturn, int &randomDice);

string myGrid[rows][cols];
string displayGrid[rows][cols];

int main()
{
    int player1Count = 1;
    int player2Count = 1;
    int playerturn = 0;
    int randomDice = 0;
    grid();
    while (player1Count <= 100 && player2Count <= 100)
    {
        system("cls");
        
        
        displayingOfplayersCharacters(player1Count, player2Count);
        playersTurn(playerturn);
        _getch(); 
        randomdice(player1Count, player2Count, playerturn, randomDice);

    
        if (player1Count >= 100)
        {
            system("cls");
            cout << "Player 1 wins!" << endl;
            break;
        }
        if (player2Count >= 100)
        {
            system("cls");
            cout << "Player 2 wins!" << endl;
            break;
        }

        Sleep(1000); 
    }

    return 0;
}

void grid()
{
    int counter = 1;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            myGrid[i][j] = to_string(counter++);
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << myGrid[i][j] << "\t\t\t";
            }
        }
        else
        {
            for (int j = cols - 1; j >= 0; --j)
            {
                cout << myGrid[i][j] << "\t\t\t";
            }
        }
        cout << endl;
    }
}

void randomdice(int &player1Count, int &player2Count, int &playerturn, int &randomDice)
{
    if(playersTurn>0)
    {
    if (playerturn % 2 == 0)
    {
        randomDice = rand() % 6 + 1;
        player1Count = player1Count + randomDice;
    }
    else
    {
        randomDice = rand() % 6 + 1;
        player2Count = player2Count + randomDice;
    }
    }
}

void playersTurn(int &playerturn)
{
    if (playerturn % 2 == 1)
    {
        cout << "Player 2 Turn ";
    }
    else if (playerturn % 2 == 0)
    {
        cout << "Player 1 Turn ";
    }
    
    ++playerturn;

    
}

void displayingOfplayersCharacters(int player1count, int player2Count)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            displayGrid[i][j] = myGrid[i][j];
            if (displayGrid[i][j] == to_string(player2Count)&& player2Count==player1count)
            {
                displayGrid[i][j] = to_string(player2Count) + "*  O";
            }
            if (displayGrid[i][j] == to_string(player1count))
            {
                displayGrid[i][j] = to_string(player1count) + "*";
            }
            else if (displayGrid[i][j] == to_string(player2Count))
            {
                displayGrid[i][j] = to_string(player2Count) + " O";
            }
            
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << displayGrid[i][j] << "\t";
        }
        cout << endl;
    }
}
