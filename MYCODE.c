#include <stdio.h> 

#define SIZE 8

void initialize_board(char board[SIZE][SIZE]);
void display_board(char board[SIZE][SIZE]);
int move_piece(char board[SIZE][SIZE], int fromx, int fromy, int tox, int toy);

int main(void)
{
    char board[SIZE][SIZE];
    int move;

    initialize_board(board);
    display_board(board);

    move = move_piece(board,fromx,fromy,tox,toy);

    return(0);
}