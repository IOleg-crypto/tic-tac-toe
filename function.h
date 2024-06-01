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
// # TODO : need to fix
int checkwin(char board[3][3])
{

    if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
        return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return 1;
    }
    if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
        return 1;
    }
    if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
        return 1;
    }
    if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
    {
        return 1;
    }
    if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void game(char board[3][3], std::string player1, std::string player2, int position, int position2, bool stop)
{
    while (stop != true)
    {
        std::cout << "Player " << player1 << " choose your position : ";
        std::cin >> position;

        switch (position)
        {
        case 1:
            board[0][0] = 'X';
            drawfield(board);
            break;
        case 2:
            board[0][1] = 'X';
            drawfield(board);
            break;
        case 3:
            board[0][2] = 'X';
            drawfield(board);
            break;
        case 4:
            board[1][0] = 'X';
            drawfield(board);
            break;
        case 5:
            board[1][1] = 'X';
            drawfield(board);
            break;
        case 6:
            board[1][2] = 'X';
            drawfield(board);
            break;
        case 7:
            board[2][0] = 'X';
            drawfield(board);
            break;
        case 8:
            board[2][1] = 'X';
            drawfield(board);
            break;
        case 9:
            board[2][2] = 'X';
            drawfield(board);
            break;
        default:
            std::cout << "Please enter a number between 1 and 9" << std::endl;
            break;
        }

        if (position == 1 || position == 2 || position == 3 || position == 4 || position == 5 || position == 6 || position == 7 || position == 8 || position == 9)
        {
            std::cout << "Player " << player2 << " choose your position : ";
            std::cin >> position2;
            switch (position2)
            {
            case 1:
                board[0][0] = 'Y';
                drawfield(board);
                break;
            case 2:
                board[0][1] = 'Y';
                drawfield(board);
                break;
            case 3:
                board[0][2] = 'Y';
                drawfield(board);
                break;
            case 4:
                board[1][0] = 'Y';
                drawfield(board);
                break;
            case 5:
                board[1][1] = 'Y';
                drawfield(board);
                break;
            case 6:
                board[1][2] = 'Y';
                drawfield(board);
                break;
            case 7:
                board[2][0] = 'Y';
                drawfield(board);
                break;
            case 8:
                board[2][1] = 'Y';
                drawfield(board);
                break;
            case 9:
                board[2][2] = 'Y';
                drawfield(board);
                break;
            default:
                std::cout << "Please enter a number between 1 and 9" << std::endl;
                break;
            }
        }
        checkwin(board);
        if (checkwin(board) == 1)
        {
            stop = true;
            std::cout << "Player " << player1 << " wins!" << std::endl;
        }
        else
        {

            stop = false;
            std::cout << "Game drawn" << std::endl;
        }
    }
}

#endif /* function_h */
