#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_c[3],target_c[12];
    int n, target, last_n, count = 0,result;

    fgets(n_c, 12, stdin);
    fgets(target_c, 12, stdin);
    
    n = atoi(n_c);
    target = atoi(target_c);
    result = n;

    while(n>0){
        last_n = (n%10);
        if (last_n == target){
            count++;
        }
        n = (n/10);
    }

    if (count == 0){
        printf("There is no \"%d\" (s) in %d.", result, result);
    }else if (count==1){
        printf("There is only 1 \"%d\" in %d.", target, result);
    }else if(count>1){
        printf("There are %d \"%d\" (s) in %d.", count, target, result);
    }else if (count>1){

    }
    

    return 0;
}