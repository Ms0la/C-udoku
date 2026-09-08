//
// Created by marti on 6/9/26.
//

#include "board.h"

#include <stdio.h>

const char sudokuRowSeparator[] = "+-------+-------+-------+";

void printBoard(int sudoku[SUDOKUSIZE][SUDOKUSIZE]) {
    printf("\n%s\n", sudokuRowSeparator);
    for (int i=0; i<SUDOKUSIZE; i++) {
        for (int j=0; j<SUDOKUSIZE; j++) {
            if (j % 3 == 0)
                printf("| ");
            if (sudoku[i][j] == 0)
                printf(". ");
            else
                printf("%d ", sudoku[i][j]);
            if (j== SUDOKUSIZE - 1)
                printf("|");
        }
        printf("\n");
        if ((i + 1) % 3 == 0)
            printf("%s\n", sudokuRowSeparator);
    }
}
