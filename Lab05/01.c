#include <stdio.h>
#include <stdlib.h>


int main(){
    int n,power;



    printf("Input n = ");
    scanf("%d",&n);
    power = n*n;
    printf("n^2 = %d", power);

    if (power%100 == n){
        printf("Yes. %d is automorphic number.", n);
    }
}