#ifndef function_h
#define function_h

#include <iostream>
#include <string>

// Function d:/gitnext/tic-tac-toe/function.h:symbol:(17,0)-(23,1)
void symbol(char symbol, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << symbol;
    }
    std::cout << std::endl;
}
void drawfield(char board[3][3])
{
    std::cout << "    |      |     " << std::endl;
    std::cout << " " << board[0][0] << "  |  " << board[0][1] << "   |  " << board[0][2] << std::endl;
    std::cout << "____|______|_____" << std::endl;
    std::cout << "    |      |     " << std::endl;
    std::cout << " " << board[1][0] << "  |  " << board[1][1] << "   |  " << board[1][2] << std::endl;
    std::cout << "____|______|_____" << std::endl;
    std::cout << "    |      |     " << std::endl;
    std::cout << " " << board[2][0] << "  |  " << board[2][1] << "   |  " << board[2][2] << std::endl;
    std::cout << "    |      |     " << std::endl;
}

// Function to check if a player has won
bool checkwin(char board[3][3], char player)
{
    // Check rows and columns
    for (int i = 0; i < 3; ++i)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }
    return false;
}
// Function to check if the board is full (draw)
bool isBoardFull(char board[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

void game(char board[3][3], std::string player1, std::string player2, int rowls, int colowns, bool stop)
{
    while (stop != true)
    {
        std::cout << "Player " << player1 << " Enter the rows and columns (1-3 1-3): ";
        std::cin >> rowls >> colowns;
        --rowls;
        --colowns;

        if (rowls > 2 || colowns > 2 || rowls < 0 || colowns < 0 || board[rowls][colowns] != ' ')
        {
            std::cout << "Invalid input, please enter a valid position between 1 and 3 that is not already taken." << std::endl;
            continue;
        }

        board[rowls][colowns] = 'X';
        drawfield(board);

        if (checkwin(board, 'X'))
        {
            std::cout << "Player " << player1 << " wins!" << std::endl;
            stop = true;
            continue;
        }
        if (isBoardFull(board))
        {
            std::cout << "Game drawn" << std::endl;
            break;
        }

        std::cout << "Player " << player2 << " Enter the rows and columns (1-3 1-3): ";
        std::cin >> rowls >> colowns;
        --rowls;
        --colowns;

        if (rowls > 2 || colowns > 2 || rowls < 0 || colowns < 0 || board[rowls][colowns] != ' ')
        {
            std::cout << "Invalid input, please enter a valid position between 1 and 3 that is not already taken." << std::endl;
            continue;
        }
        board[rowls][colowns] = 'Y';
        drawfield(board);

        if (checkwin(board, 'Y'))
        {
            std::cout << "Player " << player2 << " wins!" << std::endl;
            stop = true;
            continue;
        }
        if (isBoardFull(board))
        {
            std::cout << "Game drawn" << std::endl;
            break;
        }
    }
}

#endif /* function_h */
