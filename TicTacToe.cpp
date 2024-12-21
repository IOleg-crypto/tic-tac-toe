#include "TicTacToe.h"

void TicTacToe::DrawField(char board[3][3]) const
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "    |      |     " << std::endl;
        std::cout << " " << board[i][0] << "  |  " << board[i][1] << "   |  " << board[i][2] << std::endl;
        if (i < 2)
        {
            std::cout << "____|______|_____" << std::endl;
        }
        else
        {
            std::cout << "    |      |     " << std::endl;
        }
    }
}

TicTacToe::TicTacToe(const char initboard[3][3], std::string player1, std::string player2) : player1(player1), player2(player2)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            board[i][j] = initboard[i][j];
        }
    }
}

bool TicTacToe::isBoardFull(char board[3][3]) const
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i; j < 3; ++j)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

bool TicTacToe::CheckWin(char board[3][3], char playerSymbol)
{
    for (int i = 0; i < 3; ++i)
    {
        bool rowWin = true;
        bool colWin = true;

        for (int j = 0; j < 3; ++j)
        {
            if (board[i][j] != playerSymbol)
                rowWin = false; // check rows
            if (board[j][i] != playerSymbol)
                colWin = false; // check column
        }

        if (rowWin || colWin)
            return true;
    }
    // Check diagonals
    bool diagWin1 = true;
    bool diagWin2 = true;
    for (int i = 0; i < 3; ++i)
    {
        if (board[i][i] != playerSymbol)
            diagWin1 = false;  // top-left to bottom-right diagonal
        if (board[i][2 - i] != playerSymbol)
            diagWin2 = false;  // top-right to bottom-left diagonal
    }

    if (diagWin1 || diagWin2)
        return true;

    return false; // No winner
}
