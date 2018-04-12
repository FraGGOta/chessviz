#include <stdio.h>
#include "board_print_plain.h"

void print_board(board *a){
    int i, j;

    printf("   A B C D E F G H\n");
        printf("   _ _ _ _ _ _ _ _\n");
        for (j = 0; j <= 7; j++){
            printf("%d ", j + 1);
            for (i = 0; i <= 7; i++){
                printf("|%c", a->array[j * 8 + i]);
            }
            printf("|\n");
        }
}

void initial_board(board *a){

    int i, j;

    a->array[0] = 'r';
    a->array[1] = 'h';
    a->array[2] = 'b';
    a->array[3] = 'k';
    a->array[4] = 'q';
    a->array[5] = 'b';
    a->array[6] = 'h';
    a->array[7] = 'r';

    for (i = 0; i <= 7; i++){
        a->array[8 + i] = 'p';
    }
    for (j = 2; j <=5; j++ ){
        for (i = 0; i <= 7; i++){
            a->array[j * 8 + i] = '_';
        }
    }
    for (i = 0; i <= 7; i++){
        a->array[6 * 8 + i] = 'P';
    }

    a->array[56] = 'R';
    a->array[57] = 'H';
    a->array[58] = 'B';
    a->array[59] = 'Q';
    a->array[60] = 'K';
    a->array[61] = 'B';
    a->array[62] = 'H';
    a->array[63] = 'R';
}