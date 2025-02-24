#include <stdio.h>
#include <stdlib.h>

int main(){
    char row_c[6],column_c[6];
    int row,column,i,j;

    fgets(row_c, 6,stdin);
    fgets(column_c, 6, stdin);

    row = atoi(row_c);
    column = atoi(column_c);

  
        for(i=0;i<column;i++){
            printf("*");
            
        }
        printf(" \n");

    return 0;

}