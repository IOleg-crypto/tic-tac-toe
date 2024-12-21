#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>
#include <string>

// Function d:/gitnext/tic-tac-toe/function.h:symbol:(17,0)-(23,1)

class TicTacToe
{
private:
    char board[3][3];
    std::string player1, player2;

public:
    TicTacToe(const char initboard[3][3], std::string player1, std::string player2);
    bool isBoardFull(char board[3][3]);
    bool CheckWin(char board[3][3], char player);
    void DrawField(char board[3][3]);
};

#endif /* TICTACTOE_H */
