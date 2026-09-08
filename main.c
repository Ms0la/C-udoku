#include <stdio.h>
#include <stdlib.h>

#include "board.h"
#include "sudoku.h"



int main(void) {
    int** sudoku = generateSudoku();
    printBoard(sudoku);

    free(sudoku);
    return 0;
}

