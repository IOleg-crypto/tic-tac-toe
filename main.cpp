// main.cpp  

#include "TicTacToe.h" //main functionality

#include <iostream>
#include <ctime>

void DrawLine(char symbol, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << symbol;
    }
    std::cout << std::endl;
}
int main()
{
    std::srand(static_cast<unsigned>(time(0)));

    char initialBoard[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    std::string player1, player2;
    char answer;
    int rowls = 0, colowns = 0;
    bool stop = false;

    TicTacToe ticTacToe(initialBoard, player1, player2);

    std::cout << "Welcome to TIC-TAC-TOE\n";
    std::cout << "Do you want to play? (y/n): ";
    std::cin >> answer;

    if (answer != 'y')
    {
        std::cout << "Thanks for playing!\n";
        return 0;
    }

    do
    {
      std::cout << "Enter player 1 name: ";
      std::cin >> player1;
      std::cout << "Enter player 2 name: ";
      std::cin >> player2;

      if (player1.empty() || player2.empty())
      {
         std::cout << "Player names cannot be empty. Please try again.\n";
      }
      else if (player1 == player2)
      {
         std::cout << "Player names must be different. Please try again.\n";
      }

    } while (player1.empty() || player2.empty() || player1 == player2);

    
    
    std::cout << player1 << ", choose X or O: ";
    std::cin >> answer;
    answer = toupper(answer);

    char player1Symbol = (answer == 'X') ? 'X' : 'O';
    char player2Symbol = (player1Symbol == 'X') ? 'O' : 'X';

    while (!stop)
    {
        std::cout << player1 << " enter row and column (1-3 1-3): ";
        std::cin >> rowls >> colowns;
        --rowls;
        --colowns;

        if (rowls < 0 || colowns < 0 || rowls > 2 || colowns > 2 || initialBoard[rowls][colowns] != ' ')
        {
            std::cout << "Invalid input. Try again.\n";
            continue;
        }

        initialBoard[rowls][colowns] = player1Symbol;
        ticTacToe.DrawField(initialBoard);

        if (ticTacToe.CheckWin(initialBoard, player1Symbol))
        {
            std::cout << player1 << " wins!\n";
            break;
        }

        if (ticTacToe.isBoardFull(initialBoard))
        {
            std::cout << "Game is a draw.\n";
            break;
        }

        std::cout << player2 << " enter row and column (1-3 1-3): ";
        std::cin >> rowls >> colowns;
        --rowls;
        --colowns;

        if (rowls < 0 || colowns < 0 || rowls > 2 || colowns > 2 || initialBoard[rowls][colowns] != ' ')
        {
            std::cout << "Invalid input. Try again.\n";
            continue;
        }

        initialBoard[rowls][colowns] = player2Symbol;
        ticTacToe.DrawField(initialBoard);

        if (ticTacToe.CheckWin(initialBoard, player2Symbol))
        {
            std::cout << player2 << " wins!\n";
            break;
        }

        if (ticTacToe.isBoardFull(initialBoard))
        {
            std::cout << "Game is a draw.\n";
            break;
        }
    }

    return 0;
}
