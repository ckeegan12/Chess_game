#include <stdio.h> 
#include <stdlid.h>

#define SIZE 8

typedef enum
{
    EMPTY, KING, QUEEN, ROOK, KNIGHT, PAWN, BISHOP
} piece;

typedef enum
{
    Piece type;
    char color;
} square;

void initialize_board(char board[SIZE][SIZE]);
void display_board(char board[SIZE][SIZE]);
void print_board(void);

int main(void)
{
    char board[SIZE][SIZE];

    initialize_board(board);
    display_board(board);
    
    return(0);
}

void initialize_board(board[SIZE][SIZE]);
{
    for(int i=0;i<SIZE;i++){
      for(int j=0;j<SIZE;j++){
        board[i][j].type = EMPTY;
        board[i][j].piece = ' ';
      }
    }

    board[0][0] = (Square){ROOK, 'b'};
    board[0][1] = (Square){KNIGHT, 'b'};
    board[0][2] = (Square){BISHOP, 'b'};
    board[0][3] = (Square){QUEEN, 'b'};
    board[0][4] = (Square){KING, 'b'};
    board[0][5] = (Square){BISHOP, 'b'};
    board[0][6] = (Square){KNIGHT, 'b'};
    board[0][7] = (Square){ROOK, 'b'};
    for (int j = 0; j < SIZE; j++) {
        board[1][j] = (Square){PAWN, 'b'};
    }

    board[0][0] = (Square){ROOK, 'w'};
    board[0][1] = (Square){KNIGHT, 'w'};
    board[0][2] = (Square){BISHOP, 'w'};
    board[0][3] = (Square){QUEEN, 'w'};
    board[0][4] = (Square){KING, 'w'};
    board[0][5] = (Square){BISHOP, 'w'};
    board[0][6] = (Square){KNIGHT, 'w'};
    board[0][7] = (Square){ROOK, 'w'};
    for (int j = 0; j < SIZE; j++) {
        board[1][j] = (Square){PAWN, 'w'};
    }
}

void print_board(void)
{
    printf(" a b c d e f g h\n");
    printf(" +---------------+\n");

    for(int i=0;i<SIZE;i++){
        printf("%d|",SIZE - i);
    for(int j=0;j<SIZE;j++){
        char piece_color;
        switch(board[i][j].piece){
            case PAWN: piecechar = (board[i][j].color == w) ? Pw : Pb break;
            case ROOK: piecechar = (board[i][j].color == w) ? Rw : Rb break;
            case QUEEN: piecechar = (board[i][j].color == w) ? Qw : Qb break;
            case KING: piecechar = (board[i][j].color == w) ? Kw : Kb break;
            case KNIGHT: piecechar = (board[i][j].color == w) ? KNw : KNb break;
            case BISHOP: piecechar = (board[i][j].color == w) ? Bw : Bb break;
            default: piecechar = ' '; break;
        }
        printf("%c ", piecechar);
    }
    printf("|\n")
    }
    printf(" +---------------+\n");
}