#ifndef function_h
#define function_h
#include <iostream>
#include <string>

// Function d:/gitnext/tic-tac-toe/function.h:symbol:(17,0)-(23,1)
void symbol(char symbol , int n)
{
    for(int i = 0 ; i < n ; i++){
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

#endif /* function_h */
