#include <iostream>
#include <string>
using namespace std;
#include "Board.h"

int main(int, char**)
{
    std::cout << "Hello World" << std::endl;

    Board chessboard;
    chessboard.board_init();

    // replace 64 with num spaces
    // for (int i = 0; i < 64; i++) {
    //     cout << chessboard.space_array[i];
    // }

}
