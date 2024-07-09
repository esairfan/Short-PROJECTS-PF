#include <iostream>

using namespace std;

const int SIZE = 3;

// Function to print the Tic-Tac-Toe board
void printBoard(char board[][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(char board[][SIZE], char player)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }

    return false;
}

// Function to check if the board is full (draw)
bool checkDraw(char board[][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main()
{
    char board[SIZE][SIZE] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char currentPlayer = 'X';
    int row, col;

    do
    {
        system("cls");

        cout << "Welcome to Tic-Tac-Toe!\n";
        // Print the current board
        printBoard(board);

        // Get player move
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;
        // Check if the move is valid
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ')
        {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;

        // Check for a win
        if (checkWin(board, currentPlayer))
        {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        // Check for a draw
        if (checkDraw(board))
        {
            printBoard(board);
            cout << "It's a draw!\n";
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';

    } while (true);

    return 0;
}
