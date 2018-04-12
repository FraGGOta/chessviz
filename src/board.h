#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char array[8];
    char type;
}board;

int coordinates(board *a);

void swap(board *a, char i, int j, char i1, int j1);

#endif
