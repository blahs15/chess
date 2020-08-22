#include <string>
using namespace std;
#include "Position.h"
#include "King.h"
#include "Rook.h"


class Board
{
private:
    // BOARD_SIZE is the length of the board and assumes the board is square.
    const uint8_t ROW_SIZE = 8;
    const uint8_t COL_SIZE = 8;
    const uint16_t BOARD_SIZE = ROW_SIZE * COL_SIZE;
    string columns = "abcdefgh";
    string rows = "12345678";

    int *space_array;

public:
    Board();

    void board_init();


    // int get_indices(string posn);
    // bool validate_move(int start_column, int start_row, int end_column, int end_row);
    // Position get_king_locations(Piece board_array);
    // King checks_kings(int start_column, int start_row, int end_column, int end_row);
    // bool checkmates_king(bool black_turn);
    // void move(int start_column, int start_row, int end_column, int end_row);
    // Piece move_mirror(int start_column, int start_row, int end_column, int end_row);
    // string visual_board();

    // void dev_space_points_ref();
    // void dev_test_init();
};