#include <stdio.h>
#include <stdlib.h>
int main(){
    char hour_str[4], min_str[4];
    int hour, min;

    printf("Enter hour: ");
    fgets(hour_str, 4, stdin);

    printf("Enter minite: ");
    fgets(min_str, 4, stdin);

    hour = atoi(hour_str);  
    min = atoi(min_str);

    printf("Time is %02d:%02d\n", hour, min);
    return 0;
}