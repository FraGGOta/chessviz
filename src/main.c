#include <stdio.h>
#include "board_print_plain.h"

int main()
{
    int f, moves, i;
    printf("Enter counting of steps:");
    scanf("%d", &moves);

    board *a = (board *)malloc(sizeof(board) * 8 * 8);

    printf("Insert data format: E2 E4\n");
    initial_board(a);
    print_board(a);
    for (i = 0; i <= moves; i++){
        f = coordinates(a);
        if (f == 0){
            print_board(a);
        }
        else
            printf("\n");
    }
    return 0;
}