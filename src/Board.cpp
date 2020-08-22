#include <iostream>
#include <string>
using namespace std;
#include "Board.h"

/** Constructor. Creates a board object Creates a board object consisting of 64 named spaces,
 * a1 thru h8, corresponding to 64 Position objects, (0,0) thru (7,7).*/
Board::Board()
{
    cout << "new board created" << endl;

    // Create space_array. space_array is a 2d array of length [8][8].
    int _space_array[COL_SIZE][ROW_SIZE];
    for (int col = 0; col < COL_SIZE; col++) {
        // declare each column to be an array
        int current_col[COL_SIZE];
        for (int row = 0; row < ROW_SIZE; row++) {
            current_col[row] = -9999;   //placeholder
        }
    }

    // for (int i = 0; i < BOARD_SIZE; i++) {
    //     for (int j = 0; j < BOARD_SIZE; j++) {
    //         cout << space_array[i][j] << endl;
    //     }
    // }
}

int Board::set_space_array(){

}

/** A function to initialize the board state and pieces on the board. */
void Board::board_init()
{
    cout << "a function to initialize the board state" << endl;
}

