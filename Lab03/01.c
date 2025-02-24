#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_c[100];
    int n,i;
    fgets(n_c, 100, stdin);  

    if (n_c[0] == '\n' && n_c[1] == '\0'){
        printf("%d",-1);
    }else{
        n = atoi(n_c);
        if (n>0){
            for(i=n;i>=0;i--){
                printf("%d\n",i);
            }
        }else if (n==0){
        printf("%d",0);
        }
    }
    
    return 0;
}