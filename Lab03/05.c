#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_c[5],charactor;
    int n,i,j,count;

    fgets(n_c, 5,stdin);
    n = atoi(n_c);
    
    if (n>26 || n <= 0){
        printf("-");
    }else{
        if (n==1){
            count = 0;
        }else{
            count = n+n-2;
        }

        for(i=97+n-1;i>=97;i--){
            printf("%c",i);
            if (count > 0){
                printf("-");
                count--;
            }
        }
        for(i=97+1;i<=97+n-1;i++){
            printf("%c",i);
            if (count >0){
                printf("-");
                count--;
            }
        }
    }
    
    return 0;
}