//
// Created by marti on 8/9/26.
//

#include "sudoku.h"
#include "board.h"

static int sudoku[SUDOKUSIZE][SUDOKUSIZE];

void generateSudoku() {
    for (int i = 0; i < SUDOKUSIZE; i++) {
        for (int j = 0; j < SUDOKUSIZE; j++) {
            sudoku[i][j] = 0;
        }
    }
    sudoku[0][0] = 2;
    sudoku[1][5] = 5;
    sudoku[1][7] = 2;
    sudoku[2][1] = 3;
    sudoku[2][2] = 8;
    sudoku[2][3] = 2;
    sudoku[2][6] = 7;
    sudoku[2][7] = 5;
    sudoku[3][3] = 4;
    sudoku[4][2] = 9;
    sudoku[4][3] = 1;
    sudoku[4][5] = 2;
    sudoku[4][6] = 4;
    sudoku[4][8] = 6;
    sudoku[5][1] = 4;
    sudoku[5][6] = 9;
    sudoku[5][7] = 3;
    sudoku[6][4] = 3;
    sudoku[6][5] = 7;
    sudoku[7][0] = 8;
    sudoku[7][1] = 1;
    sudoku[7][8] = 2;
    sudoku[8][0] = 9;
    sudoku[8][3] = 8;
    sudoku[8][6] = 3;
}

