#include <iostream>

// added ui for game
#include "function.h"

char answer;
std::string player1;
std::string player2;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int position = 0;

int main()
{
    symbol('-', 120);
    std::cout << "\t\t\t\t\tWelcome to TIC-TAC-TOE" << std::endl;
    symbol('-', 120);

    do
    {
        std::cout << "Do you want to play? (y/n) : ";
        std::cin >> answer;
        switch (answer)
        {
        case 'y':
            std::cout << "Enter player 1 name : ";
            std::cin >> player1;
            std::cout << "Enter player 2 name : ";
            std::cin >> player2;
            std::cout << "Let's start the game" << std::endl;
            std::cout << "Player 1 is " << player1 << " and player 2 is " << player2 << std::endl;
            break;
        case 'n':
            std::cout << "Thanks for playing!" << std::endl;
            break;
        default:
            std::cout << "Please enter 'y' or 'n'" << std::endl;
            break;
        }
    } while (answer != 'y' && answer != 'n');

    do
    {
        std::cout << "Player " << player1 << "choose X or O :";
        std::cin >> answer;

        if (answer == 'X' || answer == 'x')
        {
            std::cout << "Player " << player1 << " is X" << std::endl;
            std::cout << "Player " << player2 << " is O" << std::endl;
        }
    } while (answer != 'X' && answer != 'x');

    drawfield(board);
    /*
    std::cout << "    |      |     " << std::endl;
    std::cout << " " << board[0][0] << "  |  " << board[0][1] << "   |  " << board[0][2] << std::endl;
    std::cout << "____|______|_____" << std::endl;
    std::cout << "    |      |     " << std::endl;
    std::cout << " " << board[1][0] << "  |  " << board[1][1] << "   |  " << board[1][2] << std::endl;
    std::cout << "____|______|_____" << std::endl;
    std::cout << "    |      |     " << std::endl;
    std::cout << " " << board[2][0] << "  |  " << board[2][1] << "   |  " << board[2][2] << std::endl;
    std::cout << "    |      |     " << std::endl;
    */

    std::cout << "Player " << player1 << " is X and Player " << player2 << " is O" << std::endl;

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
    }
}