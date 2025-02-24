#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_c[5];
    int num1, num2, num3, num4, n;
    
    fgets(n_c, 8,stdin);
    n = atoi(n_c);

    num1 = n & 1;
    num2 = n>> 1 & 1;
    num3 = n>> 2 & 1;
    num4 = n>> 3 & 1;

    printf("Binary number of %d is %d%d%d%d.", n, num4, num3, num2, num1);

    return 0;
}
