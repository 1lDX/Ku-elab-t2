#include <stdio.h>
#include <stdlib.h>

int is_prime(int x){
    char n_c[10];
    int n,i,count;

    fgets(n_c, 10,stdin);
    n = atoi(n_c);

    for(i=0;i<n;i++){
        if (n%i == 0){
            count++;
        }
    }

    if (count >2){
        
    }

    return 0;
}