#include <stdio.h>
#define BOARD_SIZE 8
void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos){
     board[yPos][xPos] = piece;
}


int main(){
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    int numPieces;
    char pieceChar;
    scanf("%d",&numPieces);
    
    for(int i = 0;i<numPieces;i++){
        int x,y;
        scanf("\n%c(%d, %d)",&pieceChar, &x,&y);
        setPieceOnTable(board, pieceChar,x,y);
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");

    for (int i =0;i< BOARD_SIZE;i++){
        printf("%d|",i);
        for(int j = 0;j<BOARD_SIZE;j++){
            if(board[i][j]!= 0){
                printf("%c|", board[i][j]);
            }else{
                printf(" |");
            }
            
        }
        printf("\n");
    }

}