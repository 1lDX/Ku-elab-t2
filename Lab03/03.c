#include <stdio.h>
#include <stdlib.h>

int main() {
    char n1_c[12], n2_c[12];
    long long int n1, n2, gcd, lcm;

    fgets(n1_c, 12, stdin);
    fgets(n2_c, 12, stdin);

    n1 = atoll(n1_c);
    n2 = atoll(n2_c);

    long long int a = n1, b = n2;
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    n1 = n1/gcd;
    n2 = n2/gcd;

    if (n2 == 1){
        printf("= %lld", n1);
    }else{
        printf("= %lld/%lld\n", n1, n2);
    }
    

    return 0;
}
