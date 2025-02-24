#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int x, int y){
    printf("  0 1 2 3 4 5 6 7\n");
    for(int i = 0;i<BOARD_SIZE;i++){
        printf("------------------\n");
        printf("%d",i);
        for(int j = 0;j<BOARD_SIZE+1;j++){
            if(i == y && j == x){
                printf("|B");
            }else if((j == 8)){
                printf("|");
            }else if(i-j == y-x){
                printf("|X");
            }else if(i+j == y+x){
                printf("|X");
            }else{
                printf("| ");
            }
        }
        printf("\n");
    }
    printf("------------------");
}
    

int main(){
    int x,y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d",&x,&y);
    bishopMoves(x,y);

    


    return 0;
}