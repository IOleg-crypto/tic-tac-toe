#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <random>
// added ui for game
#include "function.h"

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char answer;
int rowls = 0;
int colowns = 0;
std::string player1;
std::string player2;
bool stop = false;

int main()
{
    std::srand(time(0));
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
            std::cout << "Player 1 is  : " << player1 << " and player 2 is  : " << player2 << std::endl;
            break;
        case 'n':
            std::cout << "Thanks for playing!" << std::endl;
            break;
        default:
            std::cout << "Please enter 'y' or 'n' : " << std::endl;
            break;
        }
    } while (answer != 'y' && answer != 'n');

    do
    {
        std::cout << "Player " << player1 << " choose X or O : ";
        std::cin >> answer;

        if (answer == 'X' || answer == 'x')
        {
            std::cout << "Player " << player1 << " is X " << std::endl;
            std::cout << "Player " << player2 << " is O " << std::endl;
        }
        else if (answer == 'O' || answer == 'o')
        {
            std::cout << "Player " << player1 << " is O" << std::endl;
            std::cout << "Player " << player2 << " is X" << std::endl;
        }
    } while (answer != 'X' && answer != 'x' && answer != 'O' && answer != 'o');

    drawfield(board);
    game(board, player1, player2, position, position2, stop);
}
