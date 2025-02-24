#include <stdio.h>
#include <stdlib.h>

unsigned long *fibo_array(unsigned int n, double *golden_ratio){
    unsigned long *array = malloc((n+2)*sizeof(unsigned long));

    array[0] = 0;
    array[1] = 1;

    for(int i=2;i<n+2;i++){
        array[i] = array[i-1] + array[i-2];
        
    }  
    *golden_ratio = (double)array[n+1]/(double)array[n];
    return array;
}

int main() {
    double *golden_ratio;
    unsigned int n = 10;
    fibo_array(n,golden_ratio);


    return 0;
}