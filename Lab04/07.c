#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_c[10];
    int n,i,j;

    fgets(n_c, 10,stdin);
    n = atoi(n_c);

    for(i=0; i<n;i++){
        for(j = 0;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
        
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}